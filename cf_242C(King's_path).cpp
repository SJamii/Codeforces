#include<bits/stdc++.h>
using namespace std;
int main()
{
	int test,n,k,num; cin>>test;
	while(test--)
	{
		set<int>s;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>num;
			s.insert(num);
		}
		if((int)s.size() > k)
		{
			cout<<"-1"<<endl;
			continue;
		}
		cout<<n*k<<endl;
		for(int i=0;i<n;i++)
		{
			for(auto j:s)
			{
				cout<<j<<" ";
			}
			for(int q=0;q<k-(int)s.size();q++)
			{
				cout<<1<<" ";
			}
		}
		cout<<endl;
	}
}
