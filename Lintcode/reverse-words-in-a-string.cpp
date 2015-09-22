#include <iostream>
#include <string>
#include <vector>
using namespace std;

string reverseWords(string s) {
	if(s.empty())
		return "";

	vector<string> v;
	string tmp;
	int flag = 0;
	for(int i = 0; i < s.size(); ++i){
		if(s[i] != ' ' && flag == 0){
			flag = 1;
			tmp += s[i];
		}else if(s[i] != ' ' && flag == 1)
			tmp += s[i];
		else if(s[i] == ' ' && flag == 1){
			flag = 0;
			v.push_back(tmp);
			tmp = "";
		}
	}
	if(tmp != "")
		v.push_back(tmp);

	if(v.size() == 0)
		return "";
	
	tmp = "";
	for (vector<string>::iterator i = v.end() - 1; i > v.begin(); --i)
		tmp += *i + " ";
	tmp += v[0];
	return tmp;
}

int main(){
	cout<<reverseWords("the sky is blue")<<endl;
	cout<<reverseWords("  ")<<endl;
	return 0;
}
