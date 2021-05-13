#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
#define mod ((ll)1e9+7)
#define rep(i,k,n) for(ll i=k;i<n;i++)
using namespace std;
bool ok(ll x,ll y,ll n,ll m){
	if(x<0||x>n-1||y<0||y>m-1)
		return false;
	return true;
}
ll a[4][2]={{0,1},{0,-1},{1,0},{-1,0}};
ll fib[200000];

signed main()
{
	fib[0]=0;
	fib[1]=1;
	rep(i,2,100500){
		fib[i]=(fib[i-1]+fib[i-2])%mod;
	}
	ll ans=1;
		string s;
		cin>>s;
		ll n=s.length();
		rep(i,0,n){
			if(s[i]=='m'||s[i]=='w'){
				cout<<"0";
				return 0;
			}
			if(s[i]=='u'){
				ll c=0;
				while(i<n&&s[i]=='u')
				{
					i++,c++;
				}
				ans=(ans*fib[c+1])%mod;
				i--;
			}
			else if(s[i]=='n')
			{
				if(s[i]=='n'){
					ll c=0;
					while(i<n&&s[i]=='n')
					{
						i++,c++;
					}
					ans=(ans*fib[c+1])%mod;
					i--;
				}
			}
 
			}
cout<<ans;
    return 0;
}
