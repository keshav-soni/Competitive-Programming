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
	ll n;
	cin>>n;
	int a[n],cnt=0;
	vector<int> v;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
			v.pb(a[i]);				
	}
	for(int i=0;i<n;i++){
		if(a[i]%2!=0)
			v.pb(a[i]);				
	}	
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			cnt+=(__gcd(v[i],2*v[j])>1);				
		}
	}
	cout<<cnt<<"\n";	
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
