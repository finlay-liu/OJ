#include <iostream>
#include <string>
using namespace std;

// O(n)
void rotateString(string &str,int offset){
	if(str.empty() || !offset)
		return;

	string tmp(str);
	for(size_t i = 0; i < tmp.size(); ++i){
		int index = (i + offset) % tmp.size();
		tmp[index] = str[i];
	}
}

int main() {
	string s = "";
	rotateString(s, 3);
	return 0;
}