#include<bits/stdc++.h>
#define ll long long int
#define pb                push_back
#define all(x)            (x).begin(),(x).end()
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
		ll n,p;
		ll x,y,mx=INT_MIN;
		cin>>n>>p;
		string a,b;
		cin>>a>>b;
		map<char,ll> m,m2;
		for(ll i=0;i<n;i++)
			m[a[i]]=i+1;
		for(ll i=n-1;i>=0;i--)
			m2[a[i]]=i+1;		
		for(ll i=1;i<p;i++){	
			x=m2[b[i-1]];
			y=m[b[i]];
			mx=max(mx,abs(x-y));
		}
		cout<<mx<<"\n";
	return 0;
}
