#include <iostream>
#include <string>
using namespace std;

// unique-characters
bool isUnique(string &str) {
	int i, *array;
	int len = str.size();
	array = new int[256];
	for(i = 0; i < 256; i++)
		array[i] = 0;
	for(i = 0; i < len; ++i) {
		if(array[str[i]] == 0)
			array[str[i]]++;
		else
			return false;
	}
	return true;
}

int main() {
	int i;
	string s[] = {"abc", "aab", "abcd", "ertq", "eett", "abcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()_+"};
	//for(i = 0; i < 4; ++i);
	//	cout<<s[i]<<" : "<<isUnique(s[i])<<endl;
	cout<<isUnique(s[5]);
	return 0;
}