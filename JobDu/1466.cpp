#include <iostream>
#include <cstdio>
using namespace std;

int Two(int num) {
	int result = 0;
	while(num % 2 == 0) {
		num /= 2;
		result++;
	} 
	return result;
}

int main() {
	int n, m, result;
	freopen("data.in", "r", stdin);
	while(cin>>n>>m) {
		if(n == 0)
			continue;

		result = 0;
		for(int i = n; i > n - m; --i)
			result += Two(i);
		cout<<result<<endl;
	}
}