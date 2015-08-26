#include <iostream>
#include <string>
using namespace std;

int romanToInt(string& s) {
	if(s.empty())
		return 0;

	int num = 0;
	size_t it = 0;
	while(it < s.size()){
		if(s[it] == 'M'){ 
			num += 1000;
			it++;
		}else if(it + 1 < s.size() && s[it] == 'C' && s[it + 1] == 'M'){ 
			num += 900;
			it += 2;
		}else if(s[it] == 'D'){ 
			num += 500;
			it++;
		}else if(it + 1 < s.size() && s[it] == 'C' && s[it + 1] == 'D'){ 
			num += 400;
			it += 2;
		}else if(s[it] == 'C'){ 
			num += 100;
			it++;
		}else if(it + 1 < s.size() && s[it] == 'X' && s[it + 1] == 'C'){ 
			num += 90;
			it += 2;
		}else if(s[it] == 'L'){ 
			num += 50;
			it++;
		}else if(it + 1 < s.size() && s[it] == 'X' && s[it + 1] == 'L'){ 
			num += 40;
			it += 2;
		}else if(s[it] == 'X'){ 
			num += 10;
			it++;
		}else if(it + 1 < s.size() && s[it] == 'I' && s[it + 1] == 'X'){
			num += 9;
			it += 2;
		}else if(s[it] == 'V'){
			num += 5;
			it++;
		}else if(it + 1 < s.size() && s[it] == 'I' && s[it + 1] == 'V'){ 
			num += 4;
			it += 2;
		}else if(s[it] == 'I'){ 
			num += 1;
			it++;
		}
	}
	return num;
}

int main(){
	string s = "MCMLXXVI";
	cout<<romanToInt(s);
	return 0;
}