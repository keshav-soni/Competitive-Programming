#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll l,m,x,y,temp,flag=0,a,b;
		cin>>l>>m;
		multimap<ll,ll> mp;
		for(ll i=0;i<m;i++){
			cin>>a>>b;
			mp.insert(pair <ll, ll> (a,b));
		}
		for(auto x:mp){
			if(x.first<l){
				l+=x.second;
			}
			else{
				flag=1;
				cout<<"NO";
				goto next;
			}			
		}
		if(flag==0)
			cout<<"YES";
	next :		
		cout<<"\n";

	}
	return 0;
}
