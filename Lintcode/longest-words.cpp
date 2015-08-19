#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> longestWords(vector<string> &dictionary) {
        vector<string> v;
        int length = 0;
        for (vector<string>::iterator i = dictionary.begin(); i != dictionary.end(); ++i)
        	if(length < (*i).size() )
        		length = (*i).size();
        for (vector<string>::iterator i = dictionary.begin(); i != dictionary.end(); ++i)
        	if(length == (*i).size() )
        		v.push_back(*i);
        return v;
}

int main() {
	return 0;	 
}