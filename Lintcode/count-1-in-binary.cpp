#include <iostream>
using namespace std;

int countOnes(int num) {
	int result = 0;
	while(num > 0) {
		if(num % 2 == 0)
			num /= 2;
		else {
			num = (num - 1) / 2;
			result++;
		}
	}
	return result;
}

int main() {
	cout<<countOnes(1568);
	return 0;
}