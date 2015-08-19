#include <iostream>
#include <vector>
using namespace std;

vector<int> subarraySum(vector<int> nums) {
	vector<int> v;
	vector<int>::iterator i, j;
	int start, end, result;
	start = end = result = 0;

	for (i = nums.begin(); i != nums.end(); ++i) {
		result = 0;
		for (j = i; j != nums.end(); ++j) {
			result += *j;
			if(result == 0) {
				v.push_back(i - nums.begin());
				v.push_back(j - nums.begin());
				return v;
			}
		}
	}
	return v;
}

int main() {
	int array[] = {1, 2, 3, -6};
	vector<int> v;
	for (int i = 0; i < 4; ++i) {
		v.push_back(array[i]);
	}
	cout<<subarraySum(v)[0]<<" "<<subarraySum(v)[1]<<endl;
	return 0;
}