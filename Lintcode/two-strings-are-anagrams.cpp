#include <iostream>
#include <string>
using namespace std;

int CharToIndex(char ch){
	if(ch >= '0' && ch <= '9')
		return ch - '0';
	else if(ch >= 'A' && ch <= 'Z')
		return ch - 'A' + 10;
	else
		return ch - 'a' + 36;
}

bool anagram(string s, string t) {
	int lens, lent;
	lens = lent = 0;
	for(int i = 0; i < s.size(); ++i)
		if(s[i] != ' ')
			lens++;
	for(int i = 0; i < t.size(); ++i)
		if(t[i] != ' ')
			lent++;

	if(lens != lent)
		return false;

	int group[62] = {0};
	for(int i = 0; i < s.size(); ++i)
		if(s[i] != ' ')
			group[CharToIndex(s[i])]++;

	for(int i = 0; i < t.size(); ++i){
		if(t[i] != ' ')
			group[CharToIndex(t[i])]--;
		if(group[CharToIndex(t[i])] < 0)
			return false;
	}

	for(int i = 0; i < 62; ++i)
		if(group[i] != 0)
			return false;

	return true;
}

int main(){
	// for(int i = 48; i <= 57; ++i)
	// 	cout<<i<<" : "<<CharToIndex((char)i)<<endl;
	// for(int i = 65; i <= 90; ++i)
	// 	cout<<i<<" : "<<CharToIndex((char)i)<<endl;
	// for(int i = 97; i <= 122; ++i)
	// 	cout<<i<<" : "<<CharToIndex((char)i)<<endl;

	cout<<anagram("asd", "ads")<<endl;

	return 0;
}