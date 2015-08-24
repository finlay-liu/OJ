#include <iostream>
#include <vector>
#include <string>
using namespace std;

string addBinary(string& a, string& b) {
	if ((a.empty() && b.empty()) || (!a.size() && !b.size()))
		return "";

	int lena, lenb;
	lena = a.size();
	lenb = b.size();

	vector<int> v;
	for (int i = lena - 1, j = lenb - 1; i >= 0 || j >= 0; --i, --j) {
		int tmp;
		if (i >= 0 && j >= 0) {
			tmp = a[i] + b[j] - 2 * '0';
		}
		else if (i >= 0){
			tmp = a[i] - '0';
		}
		else {
			tmp = b[j] - '0';
		}
		v.push_back(tmp);
	}
	vector<int>::iterator i;
	for (i = v.begin(); i != v.end(); ++i) {
		if (*i >= 2 && i != v.end() - 1){
			*i = (*i) % 2;
			(*(i + 1))++;
		}
	}
	i = v.end() - 1;
	if(*i >= 2) {
		*i = (*i) % 2;
		v.push_back(1);
	}
	string str = "";
	for (vector<int>::iterator i = v.end() - 1; i >= v.begin(); --i)
		str += (*i) + '0';
	return str;
}

int main() {
	string s1, s2, s3;
	s1 = "111";
	s2 = "110";
	cout << addBinary(s1, s2);
	return 0;
}