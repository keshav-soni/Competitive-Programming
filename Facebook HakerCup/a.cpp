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

signed main()
{
    boost
    inout;
    ll T; cin>>T;
    for(int k=0;k<T;k++){
    	map<int,int> vow,conso;
    	map<int,int>::iterator it1,it2;
    	int mx1=0,mx2=0;
    	string s;
    	cin>>s;
    	int cnt1=0,cnt2=0;
    	for(int i=0;i<s.length();i++){
    		if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){
    			vow[s[i]]++;
    			cnt1++;
			}
    		else{
				conso[s[i]]++;	
    			cnt2++;
			}
		}
		for(it1=vow.begin();it1!=vow.end();it1++)
			mx1=max(mx1,it1->second);	
		for(it2=conso.begin();it2!=conso.end();it2++)
			mx2=max(mx2,it2->second);
		cout<<"Case #"<<k+1<<": "<<min( (2*(cnt1-mx1))+cnt2,(2*(cnt2-mx2))+cnt1 )<<endl;

	}
	return 0;
}
