#include <iostream>
using namespace std;

long long trailingZeros(long long n) {
	long long result, two, five, tmp;
	result = two = five = 0;
	for (long long i = 2; i <= n; ++i) {
		tmp = i;
		while(tmp % 10 == 0) {
			tmp /= 10;
			result++;
		}
		if(tmp % 2 == 0)
			two++;
		while(tmp % 5 == 0) {
			five++;
			tmp = tmp / 5;
		}
	}        
	if(two < five) 
		result += two;
	else 
		result += five;
	return result; 
}

int main() {
	//cout<<Divide(1000000000)<<endl;
	cout<<trailingZeros(1001171717)<<endl;
	return 0;
}