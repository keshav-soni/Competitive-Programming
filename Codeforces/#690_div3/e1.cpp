#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,count=0,mx,mn;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<=n-3;i++){
			mx=max(a[i+2],max(a[i],a[i+1]));
			mn=min(a[i+2],min(a[i],a[i+1]));
			if(mx-mn<=2)
				count++;
		}	
		cout<<count<<"\n";
	}
	return 0;
}
