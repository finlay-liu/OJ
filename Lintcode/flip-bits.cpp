#include <iostream>
using namespace std;

int bitSwapRequired(int a, int b) {
	unsigned int num = a ^ b;
	//cout<<num;
	int count = 0;
	while(num != 0){
		if(num % 2 == 1)
			count++;
		num >>= 1;
	}
	return count;
}

int main(){
	cout<<bitSwapRequired(1, -1);
	return 0;
}