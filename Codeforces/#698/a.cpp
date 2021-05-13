#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,mx=INT_MIN;
     	cin>>n;
     	ll a[n];
     	map<ll,ll>m;
     	for(int i=0;i<n;i++){
     		cin>>a[i];
     		m[a[i]]++;
		 }
     		
     	map<ll, ll>::iterator itr;
     	for (itr = m.begin(); itr != m.end(); ++itr) { 
     		mx=max(mx,itr->second);
     	}	
     	cout<<mx<<"\n";
	}
	return 0;
}
