#include <iostream>
#include <string>
using namespace std;

bool isCharacter(char c) {
	if( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
		return true;
	else
		return false;
}

bool isPalindrome(string& s) {
	int start, end, len, flag = 0;
	len = s.size();
	start = 0;
	end = len - 1;
	if(len <= 1)
		return true;
	while(end - start >= 1) {
		while(!isCharacter(s[start]) && start < end)
			start++;
		while(!isCharacter(s[end]) && end > start)
			end--;
		// cout<<start<<":"<<end<<endl;
		if( (s[start] == s[end])
			|| (s[start] - s[end] == 32) || (s[start] - s[end] == -32)) {
			start++;
			end--;
			flag = 1;
		}
		else
			return false;
	}
	return true;
}

int main(){
	string s[10] = {",.", "MAM", "ab", "Yes", "yyy", "", " ", "a.", "A man, a plan, a canal: Panama", "1a2"};
	for(int i = 0; i < 10; ++i)
		cout<<s[i]<<" : "<<isPalindrome(s[i])<<endl;
	return 0;
}