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
	string s;
	cin>>s;
	ll cnt0=0,cnt1=0;
	for(int i=0;i<n;i++){
		if(s[i]=='0')
			cnt0++;
		else
			cnt1++;	
	}
	if(s[n-1]=='0' || s[0]=='0' || cnt0%2 != 0 || cnt1%2 != 0){
		cout<<"NO\n";
		return;
	}
	string a="",b="";
	bool flag=false;
	for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(cnt1){
                a+='(';
                b+='(';
                cnt1-=2;
            }
            else{
                a+=')';
                b+=')';
            }
        }
        else{
            if(cnt0%2==0){
                a+='(';
                b+=')';
                cnt0--;
            }
            else{
                a+=')';
                b+='(';
                cnt0--;
            }
        }
	}
	cout<<"YES\n";
	cout<<a<<"\n"<<b<<"\n";
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
