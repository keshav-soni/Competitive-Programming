#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,p=0,q=0;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n;i++)
		{
			if(a[i]%2==0)
				p++;
			else
				q++;
		}		
		if(q%2)
			cout<<2;
		else
			cout<<1;
		cout<<"\n";	
	}
	return 0;
}
