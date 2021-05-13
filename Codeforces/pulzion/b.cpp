#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
int const N=1e6;

using namespace std;
signed main()
{
    boost
    vector <ll> fb (N+10,0);
    fb[1]=1;
    fb[2]=2;
    for(ll i=3;i<=N;i++){
    	fb[i]=(fb[i-1]+fb[i-2])%MOD;
	}
    test{
		ll n;
		cin>>n;
		cout<<fb[n]%MOD<<"\n";
	}	
    	
	return 0;
}
