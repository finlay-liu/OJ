#include <iostream>
#include <vector>
using namespace std;

int maxProfit(vector<int> &prices){
	if(prices.empty() || prices.size() == 1)
		return 0;

	int sum = 0;
	vector<int>::iterator i, j;
	for (i = prices.begin(), j = prices.begin() + 1; j != prices.end(); ++i, ++j)
		if(*j - *i > 0)
			sum += (*j - *i);
	return sum;
}

int main(){
	std::vector<int> v;
	v.push_back(2);
	cout<<maxProfit(v);
	return 0;
}