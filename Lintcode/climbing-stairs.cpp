#include <iostream>
#include <vector>
using namespace std;

int climbStairs(int n) {
	int *array = new int[n];
	array[0] = 1;
	array[1] = 2;
	for(int i = 2; i < n; ++i)
		array[i] = array[i - 1] + array[i - 2];
	return array[n - 1];
}

int main() {
	cout<<climbStairs(6);
	return 0;
}