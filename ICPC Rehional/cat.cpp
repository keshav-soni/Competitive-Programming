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
	ll a[n],b[n];
	set<ll> s;
	set<ll>::iterator it;
	map<ll,ll> m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		s.insert(a[i]);
	}	
	for(int i=0;i<n;i++)
		b[i]=a[i];	
	sort(a,a+n);
	for(it=s.begin();it!=s.end();it++){
		for(ll i=0;i<n;i++){
			if(*it==a[i]){
			ll x=2*min(i,n-i-1)+1;
			if(x>m[*it])
				m[*it]=x;
			}
		}
	}	
//	for(auto x:m){
//		cout<<x.first<<" "<<x.second<<endl;	
//	}
	for(int i=0;i<n;i++)
		cout<<m[b[i]]<<" ";
	cout<<endl;	
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
