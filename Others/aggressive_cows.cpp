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

int n,c;
int x[100000];

// gets converted to 1 1 1 1 1 1 1 1 1 1 1 0 0 0 0 0 
/// problem.. Then just apply binary search to find the
// last valid d i.e the last 1 after which 0's start

bool check(int d){       // d is the minimum distance
	int last=-1e9; 		// last stall in which cow was placed
	int cnt=0;			 // max number of cows accomodated
	for(int i=0;i<n;i++){ 
		if(x[i]-last>=d){
			cnt++; 		//we put the cow in the ith stall
			last=x[i];
		}
	}
	if(cnt>=c) 		// we can put atleast c cows 
		return 1;
	else
		return 0;
}

void solve(){
	cin>>n>>c;
	for(int i=0;i<n;i++)	
		cin>>x[i];
	sort(x,x+n);
	
	int l=1,h=1e9;
	int ans;
	while(l<=h){
		int mid=(l+h)/2;
		if(check(mid)){
			ans=mid;
			l=mid+1;
		}
		else
			h=mid-1;
	}
	cout<<ans<<"\n";		
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
