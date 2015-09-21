#include <iostream>
using namespace std;

long long trailingZeros(long long n) {
	int count = 0;
	while((n /= 5) > 0)
		count += n;
	return count;
}

int main(){
	cout<<trailingZeros(125);
	return 0;
}