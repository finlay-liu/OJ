#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string int2string(int n){
	string s = "";
	string tmp;
	while(n >= 0){
		tmp = n % 10 + '0';
		s = tmp + s;
		n /= 10;

		if(n == 0)
			break;
	}
	return s;
}

string string2zero(string s){
	for(int i = 0; i < s.size(); ++i)
		if(s[i] != '0')
			return s;
	return "0";
}

string largestNumber(vector<int> &num) {
	if(num.empty())
		return "";

	vector<string> v;
	for (vector<int>::iterator i = num.begin(); i != num.end(); ++i)
		v.push_back(int2string(*i));
	sort(v.begin(), v.end());

	string s = "";
	for (vector<string>::iterator i = v.end() - 1; i >= v.begin(); --i)
		s += *i;

	return string2zero(s);
}

int main(){
	std::vector<int> v;
	// v.push_back(1); v.push_back(20); v.push_back(23); v.push_back(4); v.push_back(8);
	v.push_back(0);
	v.push_back(0);
	cout<<largestNumber(v); 
	return 0;
}