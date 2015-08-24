#include <iostream>
#include <cstdio>
#include <algorithm>
#include <string>
using namespace std;

bool cmp(const string & A,const string &B) { 
	return (A+B) < (B+A);
}

int main() {
	string num[110];
	int n, i;
	//freopen("data.in", "r", stdin);
	while(cin>>n) {
		for(i = 0; i < n; ++i)
			cin>>num[i];

		sort(num, num + n, cmp);

		for(i = 0; i < n; ++i)
			cout<<num[i];
		cout<<endl;
	}
}