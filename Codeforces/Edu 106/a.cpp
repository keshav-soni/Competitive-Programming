#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    test{
		ll n,k1,k2,w,b;
		cin>>n>>k1>>k2>>w>>b;
		ll temp=(k1+k2)/2;
		ll t2=(n*2-k1-k2)/2;
		if(w<=temp && b<=t2)
			cout<<"YES";
		else
			cout<<"NO";	
		cout<<"\n";		
		
	}
	return 0;
}
