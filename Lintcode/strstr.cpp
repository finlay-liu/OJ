#include <iostream>
#include <string>
using namespace std;

int strStr(const char *source, const char *target) {
	if(source == NULL || target == NULL)
		return -1;
	size_t result;
	string str1(source), str2(target);
	result = str1.find(target);
	if(result != string::npos)
		return int(result);
    return -1;
}

int main(){
	cout<<strStr(NULL, "bcd");
}