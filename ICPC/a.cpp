#include<bits/stdc++.h>
#define ll long long int
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test   ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 		push_back

inline ll gcd(ll a,ll b){if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a,ll b){return (a / gcd(a, b) * b);}
inline bool isprime(ll n){ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}
inline ll ceil(ll num,ll den){return ((num + den - 1) / den);}

const int MOD = 1e9 + 7;
using namespace std;

void trace(ll x){cout<<x<<"\n";}
void trace(ll a[],ll n){for(ll i=0;i<n;i++)cout<<a[i]<<" ";	cout<<"\n";}
void trace(vector<ll> v){for(auto x:v)cout<<x<<" "; cout<<"\n";}
void trace(map<ll,ll> m){for(auto x:m)cout<<x.first<<" -> "<<x.second<<"\n";}

void solve(){
	ll n,x;
	cin>>n>>x;
	if(x==n){
		cout<<1<<"\n";
		return ;
	}
	
	if(n&n-1==0 && pow(2,log2(n))==n ){
		if(x>0)
			cout<<1;
		else
			cout<<-1;	
	}
	else{
		int x=floor(log2(n));
		ll ans=pow(2,x);
		cout<<ans<<endl;
		ll cnt=1;
		cnt+=ceil(abs(n-ans)/x);
		cout<<cnt;
	}
	cout<<"\n";
	return ;
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
