#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
		ll n,req = 0;;
		cin>>n;
		map<string,ll>m;
		string s;
		for(ll i=0;i<n;i++)
		{			
			cin>>s;
			m[s]++;
		}
		for(auto x:m)
			req=max(req,x.second);
		
		for(auto x:m)
			if(req==x.second)
				cout<<x.first<<"\n";
	return 0;
}
