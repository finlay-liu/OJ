#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
	if(digits.empty()) {
		digits.push_back(1);
		return digits;
	}

	for(vector<int>::iterator i = digits.end() - 1; i >= digits.begin(); --i) {
		if(i == digits.end() - 1)
			(*i)++;
		
		if(*i >= 10 && i != digits.begin()){
			(*(i - 1))++;
			(*i) = 0;
		}
	}
	if(digits.front() >= 10) {
		*digits.begin() = 0;
		digits.insert(digits.begin(), 1);
	}

	return digits;
}

void PrintVector(vector<int> v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); ++i)
		cout<<*i<<" ";
	cout<<endl;
}

int main() {
	vector<int> v;
	v.push_back(9); v.push_back(9); v.push_back(9);
	v = plusOne(v);
	PrintVector(v);
	return 0;
}