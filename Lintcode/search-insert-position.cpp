#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int> &A, int target) {
	if(A.size() == 0)
		return 0;
	else {
		if(A[0] > target)
			return 0;
		else if (A[A.size() - 1] < target)
			return A.size();

		for (vector<int>::iterator i = A.begin(); i < A.end(); ++i) {
			if (*i == target)
				return i - A.begin();
			else if (*i == target)
				return i - A.begin(); 
			else if (target > *i && target < *(i + 1) ) {
				return i - A.begin() + 1;
			}
		}
	}
}

int main() {
	int array[] = {1,3,5};
	vector<int> v;
	for (int i = 0; i < 3; ++i) {
		v.push_back(array[i]);
	}
	//v.push_back(5);
	cout<<searchInsert(v, 4);
	return 0;
}