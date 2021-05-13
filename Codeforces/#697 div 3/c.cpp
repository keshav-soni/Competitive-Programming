#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll an,bn,k,ans=0;
     	cin>>an>>bn>>k;
     	ll a[k],b[k];
     	map<ll,ll>m1,m2;
     	map<pair<ll,ll>,ll>m3;
     	for(ll i=0;i<k;i++)
     		cin>>a[i];
		for(ll i=0;i<k;i++) 
			cin>>b[i];
		for(ll i=0;i<k;i++){
			ans+=i-m1[a[i]]-m2[b[i]]+m3[{a[i],b[i]}];
			m1[a[i]]++;
			m2[b[i]]++;
			m3[{a[i],b[i]}]++;			
		}
		cout<<ans<<"\n";
		
		
	}
	return 0;
}
