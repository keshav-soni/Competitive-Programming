#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll te;
	cin>>te;
	while(te--)
	{
		ll n;
		cin>>n;
		vector<ll>v(n,0) , p(n,0) , q(n,0);
		ll s = 0,ans = 0;
		bool tex = 0,wr = 0;
		for(ll i=0;i<n;i++)
		{
			cin>>v[i];
		}
		for(ll i=0;i<n;i++)
		{
			s=s+v[i];
		}
		for(ll i=0;i<n;i++)
		{
			if(tex)
			{
				p[i] = v[i];
				tex = !tex;
			}
			else
			{
				p[i] = 1;
				tex = !tex;
			}
		}		
		tex = 1;		
		for(ll i=0;i<n;i++)
		{
			if(tex)
			{
				q[i] = v[i];
				tex = !tex;
			}
			else
			{
				q[i] = 1;
				tex = !tex;
			}
		}
				for(ll i=0;i<n;i++)
			ans = ans + abs(v[i] - p[i]);		
	
		if((ans*2) <= s)
			wr = 1;
		if(wr)
		{
			for(auto x:p)
				cout<<x<<" ";			
		}
		else
		{
			for(auto x:q)
				cout<<x<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
