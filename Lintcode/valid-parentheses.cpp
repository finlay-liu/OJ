#include <iostream>
#include <string>
#include <vector>
using namespace std;

int Parentheses2int(char ch){
	if(ch == '(')
		return 1;
	else if(ch == ')')
		return -1;
	else if(ch == '[')
		return 2;
	else if(ch == ']')
		return -2;
	else if(ch == '{')
		return 3;
	else if(ch == '}')
		return -3;
}

bool isValidParentheses(string& s){
	if(s.empty())
		return true;
	// (1) [2] {3}
	vector<int> v;
	for(size_t i = 0; i < s.size(); ++i){
		if(Parentheses2int(s[i]) > 0)
			v.push_back(Parentheses2int(s[i]));
		else if(Parentheses2int(s[i]) < 0 && !v.empty() && v.back() == -Parentheses2int(s[i]) )
			v.erase(v.end() - 1);
		else
			return false;
	}
	if(v.empty())
		return true;
	else
		return false;
}

int main(){
	string s = "]";
	cout<<isValidParentheses(s);
	return 0;
}