#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices) {
	int max = 0;
	for(vector<int>::iterator i = prices.begin(); i != prices.end(); ++i) {
		for(vector<int>::iterator j = i + 1; j != prices.end(); ++j) {
			if(*j - *i >= max)
				max = *j -*i;
		}
	}
	return max;
}

int main() {
	std::vector<int> v;
	v.push_back(2); v.push_back(1); v.push_back(2); v.push_back(0); v.push_back(1);
	cout<<maxProfit(v);
	return 0;
}