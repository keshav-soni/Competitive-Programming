#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,x;
		cin>>n;
		ll a[n],b[n],prev=n,flag=0;
		set<ll> s;
		for(ll i=0;i<n;i++){
			cin>>a[i];
			s.insert(a[i]);
		}	
		ll i=n-1;
		while(s.size()!=0){
			x=*s.rbegin();
			vector<ll> v;
			while(x!=a[i]){
				v.push_back(a[i]);
				i--;
			}
			v.push_back(a[i]);
			i--;
			reverse(v.begin(),v.end());
			for(auto x:v){
				cout<<x<<" ";
				s.erase(x);
			}				
		}
		
		cout<<"\n";
	}
	return 0;
}
