#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
		ll n,k,x,mx=INT_MIN;
		cin>>n>>k;
		ll a[n];
		multiset<ll> s;
		multiset<ll>::iterator it;
		for(int i=0;i<n;i++)
			cin>>a[i];
			
		for(ll i=0;i<k;i++)
			s.insert(a[i]);	
		it=s.begin();
		advance(it,((k+1)/2)-1 );		
		mx=max(mx,*it);
		for(int i=k;i<n;i++){
			s.insert(a[k]);
			s.erase(a[i-k]);
			mx=max(mx,*it);
		}
		cout<<mx<<"\n";
	return 0;
}
