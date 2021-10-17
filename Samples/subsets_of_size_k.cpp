#include<bits/stdc++.h>
#define ll long long int
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test   ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 		push_back
#define inout  freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

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

vector<int> v{1,2,3,4,5,6,7,8,9,10};
int N = v.size(),K = 3;
for (int j = 0; j < (1<<N); j++) {
    if(__builtin_popcount(j)!=K)
        continue;
    vector<int> subset;
    for (int i = 0; i < N; i++)
        if (j&(1<<i)) subset.push_back(v[i]);
    
    for(auto i:subset)
        cout<<i<<" ";
    cout<<endl;
}

}

signed main()
{
    boost
//	#ifndef ONLINE_JUDGE
//	    inout;           
//	#endif
	ll T; cin>>T;
    for(ll i=0;i<T;i++){
    	//cout << "Case #" << i+1 << ": ";    // Kickstart
		solve();
	}
}
