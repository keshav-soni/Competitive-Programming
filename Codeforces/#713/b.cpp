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

ll n,x;
void solve(){
	cin>>n;
	char a[n][n];
	ll x[4];
	ll k=0;
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cin>>a[i][j];
			if(a[i][j]=='*'){
				x[k]=i;
				x[k+1]=j;
				k+=2;
			}			
		}
	}
	if(x[0]==x[2]){
		if(x[0]!=0){
			a[0][x[1]]='*';
			a[0][x[3]]='*';
		}
		else{
			a[n-1][x[1]]='*';
			a[n-1][x[3]]='*';
		}
	}
	else if(x[1]==x[3]){
		if(x[1]!=0){
			a[x[0]][0]='*';
			a[x[2]][0]='*';
		}
		else{
			a[x[0]][n-1]='*';
			a[x[2]][n-1]='*';
		}
	}
	else{
		a[x[0]][x[3]]='*';
		a[x[2]][x[1]]='*';
	}
	for(ll i=0;i<n;i++){
		for(ll j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<"\n";
	}
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
