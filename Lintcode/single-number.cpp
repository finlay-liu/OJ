#include <iostream>
#include <vector>
using namespace std;

int singleNumber(vector<int> &A) {
	int result = 0;
	for (vector<int>::iterator i = A.begin(); i != A.end(); ++i) {
		result ^= *i;
	}
	return result;
}

int main() {
	int array[] = {1};
	vector<int> v;
	for (int i = 0; i < 1; ++i) {
		v.push_back(array[i]);
	}
	cout<<singleNumber(v);
	return 0;
}