#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,req = 0,temp = 0;
		cin>>n;
		int a[n];
		map<int,int>m;
		map<int,int>::iterator it;
		
		for(int i=0;i<n;i++)
			cin>>a[i];	
		
		for(int i=0;i<n;i++)
			m[a[i]]++;

		for(it=m.begin();it!=m.end();it++)
		{
			if(it->second==1)
			{
				req = it->first;
				break;
			}
			else
				temp++;
		}
		
		if(temp==m.size())
			cout<<"-1"<<"\n";
		else
		{
			for(int i=0;i<n;i++)
			{
				if(req == a[i])
					cout<<i+1<<"\n";
			}			
		}		
	}
	return 0;
}
