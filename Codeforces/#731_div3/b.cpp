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
	string s;
	cin>>s;
	int n=s.length();
	bool flag=0;
	vector<char> v;
	for(int i=0;i<26;i++)	
		v.push_back(97+i);
	char prev=max(s[0],s[n-1]);
	if(prev==s[0])
		flag=1;	
	bool f2=0;
	for(int i=25;i>=0;i--){
		if(prev==v[i]){
			if(i+1!=s.length()){
				cout<<"NO"<<endl;
				return;					
			}
			f2=1;
			if(flag){
				s.erase(s.begin());
				prev=max(s[s.length()-1],s[0]);
				if(prev==s[0])
					flag=1;
				else
					flag=0;			
			}
			else{
				s.erase(s.begin()+s.length()-1);	
				prev=max(s[s.length()-1],s[0]);	
				if(prev==s[0])
					flag=1;
				else
					flag=0;	
			}						
		}
		else{
			if(f2){
				cout<<"NO"<<endl;
				return;					
			}
		}
	}
	cout<<"YES"<<endl;
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
