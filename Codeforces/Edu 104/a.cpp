#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
	ll n;
	cin>>n;
	ll a[n];
	map<ll,ll> m;
	for(ll i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}

	sort(a,a+n);
	
		cout<<n-m[a[0]];	
	cout<<"\n";

	}
	return 0;
}
