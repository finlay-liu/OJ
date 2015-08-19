#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArray(vector<int> &A, vector<int> &B) {
	vector<int> v;
	vector<int>::iterator i, j;
	i = A.begin(); j = B.begin();
	while(i != A.end() || j != B.end() ) {
		if(i != A.end() && j != B.end() ) {
			if(*i <= *j){
				v.push_back(*i);
				i++;
			}else {
				v.push_back(*j);
				j++;
			}
		}
		else if(i != A.end()) {
			v.push_back(*i);
			i++;
		}else {
			v.push_back(*j);
			j++;
		}
	}
	return v;
}

int main() {
	int array1[] = {1,2,4,5};
	int array2[] = {-1, 0};
	vector<int> v1, v2, v3;

	for(int i = 0; i < 4; ++i) 
		v1.push_back(array1[i]);
	for(int i = 0; i < 2; ++i) 
		v2.push_back(array2[i]);

	v3 = mergeSortedArray(v1, v2);
	for (vector<int>::iterator i = v3.begin(); i != v3.end(); ++i)
		cout<<*i<<" ";
	return 0;
}