#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

int main() {
	string str;
	int num, sum;
	char oper;
	while(cin>>str) {
		vector<double> v;
		stringstream ss;
		ss<<str;

		ss>>num;
		v.push_back(num);

		while(ss>>oper>>num) {
			if(oper == '+')
				v.push_back(num);
			else if(oper == '-')
				v.push_back(-num);
			else if(oper == '*')
				(* (v.end() - 1) ) = v.back() * num;
			else if(oper == '/')
				(* (v.end() - 1) ) = v.back() / num;
			//cout<<num<<oper<<endl;
		}
		sum = 0;
		for(vector<double>::iterator i = v.begin(); i != v.end(); ++i) {
			sum += *i;
		}
		cout<<sum<<endl;		
	}
	return 0;
}