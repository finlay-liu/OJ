#include <iostream>
using namespace std;

int sqrt(int x) {
	if(x <= 0)
		return 0;
	
	if(x * x == x)
		return x;

	long long start = 1;
	long long mid = x / 2;
	long long end = x;
	while(!((mid * mid <= x) && ((mid + 1) * (mid + 1)) > x)){
		if(mid * mid > x){
			end = mid;
			mid = (end + start) / 2;
		}else{
			start = mid;
			mid = (end + start) / 2;
		}
	}
	return mid;
}

int main(){
	for(int i = 0; i < 999999999; i++)
		cout<<i<<" : "<<sqrt(i)<<endl;
	return 0;
}