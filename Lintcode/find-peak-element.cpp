#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int> A) {
	if(A.empty() || A.size() <= 2)
		return -1;

	for(vector<int>::iterator i = A.begin() + 1; i != A.end() - 1; ++i) {
		if(*i > *(i -1) && *i > *(i + 1))
			return i - A.begin();
	}
}

int main() {
	std::vector<int> v;
	v.push_back(1); v.push_back(2); v.push_back(1);
	cout<<findPeak(v);
	return 0;
}