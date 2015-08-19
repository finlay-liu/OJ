#include <iostream>
#include <vector>
using namespace std;

int minSubArray(vector<int> nums) {
	int min, result = 0;
	if(nums.empty())
		return 0;
	else 
		min = nums[0];
	for (vector<int>::iterator i = nums.begin(); i != nums.end(); ++i) {
		if(*i < 0)
			result += *i;
		if(*i < min)
			min = *i;
	}
	
	if(result < 0)
		return result;
	else
		return min;
}

int main() {
	int array1[] = {};
	vector<int> v1;

	for(int i = 0; i < 0; ++i) 
		v1.push_back(array1[i]);
	cout<<minSubArray(v1);
	return 0;
}