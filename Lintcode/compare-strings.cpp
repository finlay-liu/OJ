#include <iostream>
#include <string>
using namespace std;

bool compareStrings(string A, string B) {
	int len1, len2, flag;
	len1 = A.size(); len2 = B.size();
	for (int i = 0; i < len2; ++i) {
		flag = 0;
		for (int j = 0; j < len1; ++j) {
			if(B[i] == A[j]) {
				flag = 1;
				A[j] = ' ';
				break;
			}
		}
		if(!flag)
			return false;
	}
	return true;
}

int main() {
	cout<<compareStrings("AAA","A")<<endl;
	cout<<compareStrings("AAAAAAAAAAAABBBBBCDD","ABCDD")<<endl;
	return 0;
}