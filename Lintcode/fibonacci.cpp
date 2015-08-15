#include <iostream>
using namespace std;

int fibonacci(int n) {
	int *array = new int[n + 3];
	array[0] = 0;
	array[1] = array[2] = 1;

	for(int i = 3; i < n; ++i) {
		array[i] = array[i - 1] + array[i - 2];
	}

	int result = array[n - 1];
	delete []array;
	return result;
}

int main() {
	for(int i = 1; i <= 25; ++i)
		cout<<i <<" : "<<fibonacci(i)<<endl;
	return 0;
}