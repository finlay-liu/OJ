#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string& s) {
	int start, end, len, flag;
	flag = 0;
	end = 0;
	len = s.size();
	for(int i = 0; i < len; ++i){
		if(s[i] == ' ') {
			flag = 1;
			start = i;
		}
		else if(s[i] == ' ' && flag == 1) {
			start = i;
		}
		else if(i == len - 1 && flag == 1) {
			end = len - 1;
		}
	}
	if(end == 0)
		return len;
	else
		return end - start;
}

int main(){
	string s[5] = {"AumsdgOVRB", "Up down", "You can find it", "Yes", "Come on"};
	for(int i = 0; i < 5; ++i)
		cout<<s[i]<<" : "<<lengthOfLastWord(s[i])<<endl;
	return 0;
}