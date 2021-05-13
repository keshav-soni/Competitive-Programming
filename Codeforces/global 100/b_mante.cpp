#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<ll>v(n,0) , x(n,0) , y(n,0);
		ll s = 0,sum = 0;
		bool tt = 0,ol = 0;
		for(ll i=0;i<n;i++)
			cin>>v[i];
		for(ll i=0;i<n;i++)
			s+=v[i];
		for(ll i=0;i<n;i++)
		{
			if(tt)
			{
				x[i] = v[i];
				tt = !tt;
			}
			else
			{
				x[i] = 1;
				tt = !tt;
			}
		}		
		tt = 1;		
		for(ll i=0;i<n;i++)
		{
			if(tt)
			{
				y[i] = v[i];
				tt = !tt;
			}
			else
			{
				y[i] = 1;
				tt = !tt;
			}
		}	
		for(ll i=0;i<n;i++)
			sum+= abs(v[i] - y[i]);
		
	
		if((sum*2) <= s)
			ol = 1;
		
		if(ol)
		{
			for(auto zz:x)
				cout<<zz<<" ";
		}
		else
		{
			for(auto zz:y)
				cout<<zz<<" ";			
		}
		cout<<"\n";
	}
	return 0;
}
