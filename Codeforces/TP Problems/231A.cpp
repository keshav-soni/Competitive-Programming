#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    ll n,cnt=0;
    cin>>n;
    for(ll i=0;i<n;i++){
	ll a,b,c;
	cin>>a>>b>>c;
	if( a==1 && b==1 || b==1&&c==1 || c==1&&a==1 )
		cnt++;
	}
	cout<<cnt<<"\n";
	return 0;
}
