#include <iostream>
#include <vector>
using namespace std;

int removeElement(vector<int> &A, int elem) {
    for (vector<int>::iterator i = A.begin(); i != A.end(); ++i) {
    	if(*i == elem) {
    		A.erase(i);
    		i = A.begin();
    	}
    }
    if(A.size() >= 1 && A[0] == elem )
    	return A.size() - 1;
    return A.size();
}

int main() {
	int array[] = {1, 4, 2, 3, 4, 4, 4, 4};
	vector<int> v;
	for(int i = 0; i < 8; i++)
	 	v.push_back(array[i]);
	cout<<removeElement(v, 4);
	return 0;
}