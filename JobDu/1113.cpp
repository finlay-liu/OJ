#include <iostream>
#include <cmath>
using namespace std;

int fun(int m, int n) {
    int c1, c2, sum, k, i, j, LastStart, LastEnd;
    c1 = log(n) / log(2) + 1; //深度
    c2 = log(m) / log(2) + 1;

    sum = 0;
    k = 1;
    for(i = 0; i < c1 - c2; i++) {
        sum = sum + k;
        k = 2 * k;
    }

    LastStart = m * k;
    LastEnd = LastStart + k;

    if(LastEnd <= n)
    	sum = sum + k;
    else {
        for(j = LastStart; j <= n; j++)
            sum++;
    }
    return sum;
}

int main() {
	int m, n;
	while(cin>>m>>n) {
		if(!m && !n)
			break;

		cout<<fun(m, n)<<endl;
		//cout<<"He";
	}
	return 0;
}