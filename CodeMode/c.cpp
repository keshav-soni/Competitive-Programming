#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    ll n;
    cin>>n;
    ll a[n];
    map<ll,ll> m;
    for(ll i=0;i<n;i++)	{
    	cin>>a[i];
    	m[a[i]]++;
	}
	sort(a,a+n);
	ll sum=0,cnt=0;
	for(ll j=0;j<n;j++){
		for(ll i=j+1;i<n;i++){
			sum+=a[i]+1;
			
			if(m[sum]>0){
				cnt++;
			}		
		}	
	}
	cout<<n-cnt;	
	return 0;
}
