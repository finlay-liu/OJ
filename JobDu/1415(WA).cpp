#include <iostream>
#include <string>
#include <stdio.h>
#include <vector>
using namespace std;

int main()
{
	int N, M, tmp, i;
	string str;
	// freopen("data.in", "r", stdin);
	while(cin>>N>>M)
	{
		int array[] = new int[M];
		i = 0;
		for(int i = 0; i < N; ++i)
		{
			cin>>str;
			if(str == "Push")
			{
				cin >> tmp;
				if(v.size() == M)
					cout<<"failed"<<endl;
				else
					v.push_back(tmp);
			}
			else if (str == "Pop")
			{
				if(v.size() > 0)
					v.erase(v.begin());
				else
					cout<<"failed"<<endl;
			}
			else if(str == "Query")
			{
				cin>>tmp;
				if(tmp > M || tmp > v.size())
					cout<<"failed"<<endl;
				else
					cout<<v[tmp - 1]<<endl;
			}
			else if(str == "Isempty")
			{
				if(v.empty())
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
			}
			else if(str == "Isfull")
			{
				if(v.size() == M)
					cout<<"yes"<<endl;
				else
					cout<<"no"<<endl;
			}
		}
	}
	return 0;
}