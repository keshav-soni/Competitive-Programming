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
	int k,n,m,x;
	cin>>k>>n>>m;
	vector<int> v1,v2,ans;	
	
	for(int i=0;i<n;i++){
		cin>>x;
		v1.pb(x);
	}
	for(int i=0;i<m;i++){
		cin>>x;
		v2.pb(x);
	}
	int i=0,j=0;
	while(i<n && j<m){
		if(v1[i]<v2[j]){
			ans.pb(v1[i]);
			i++;
		}
		else{
			ans.pb(v2[j]);
			j++;
		}			
	}
	if(i<n){
		for(;i<n;i++)
			ans.pb(v1[i]);
	}
	if(j<m){
		for(;j<m;j++)
			ans.pb(v2[j]);
	}
	bool flag=0;
	for(int i=0;i<ans.size();i++){
		if(ans[i]==0)
			k++;
		else if(ans[i]>k){
			flag=1;
			break;
		}	
	}
	if(!flag){
		for(auto it:ans)
			cout<<it<<" ";
		cout<<endl;
		return;	
	}
	cout<<-1;
	cout<<endl;
	return;	
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
