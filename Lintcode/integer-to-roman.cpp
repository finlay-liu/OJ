#include <iostream>
#include <string>
using namespace std;

string intToRoman(int n) {
	int nums[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
	string str[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
	string s;
	while(n) {
		for(int i = 0; i < 13; ++i){
			if(n >= nums[i]){
				n -= nums[i];
				s += str[i];
				break;
			}
		}
	}
	return s;
}

int main() {
	cout<<intToRoman(3999);
	return 0;
}