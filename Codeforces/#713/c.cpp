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
	ll a,b,cnt0=0,cnt1=0,cnt2=0,temp=0;
	string s;
	cin>>a>>b>>s;
	string x,y;
	if(s.length()==1){
		cout<<0<<"\n";
		return ;
	}
	for(auto x:s){
		if(x=='1')
			cnt1++;
		else if(x=='0')
			cnt0++;
		else
			cnt2++;		
	}
	for(ll i=0;i<s.length();i++){
		if((s.length()/2)%2==0){
			if(temp<s.length()/2)
				x+=s[i];
			else if(temp>=s.length()/2)
				y+=s[i];	
		}
		else{
			if(temp<s.length()/2)
				x+=s[i];
			else if(temp>s.length()/2)
				y+=s[i];
		}
		temp++;	
	}
	a-=cnt0;
	b-=cnt1;
	reverse(y.begin(), y.end());
	cout<<x<<endl;
	cout<<y<<endl;
	cout<<a<<" "<<b<<endl;
	bool flag=true;
	for(ll i=0;i<s.length()/2;i++){
		if(x[i]==y[i] && x[i]!='?')
			continue;		
		else if(x[i]=='?' && y[i]=='?'){
			if(a>=b && a>=2){
				x[i]='0';
				y[i]='0';
				a-=2;
			}
			else if(b>a && b>=2){
				x[i]='1';
				y[i]='1';
				b-=2;
			}
			else{
				flag=false;
				break;
			}
		}
		else if(x[i]!=y[i] && (x[i]=='?' || y[i]=='?')){
			if(x[i]=='?'){
				if(y[i]=='1' && b>=1){
					x[i]='1';
					b--;
					cout<<"fgrb";
				}
				else if(y[i]=='0' && a>=1){
					x[i]=='0';
					a--;
				}
				else{
					flag=false;
					break;
				}				
			}
			else{
				if(x[i]=='1' && b>=1){
					y[i]='1';
					b--;					
				}
				else if(x[i]=='0' && a>=1){
					y[i]='0';
					a--;
				}
				else{
					flag=false;
					break;
				}
			}
		}
		else{
			flag=false;
			break;
		}	
	}
	if(!flag)
		cout<<-1;
	else{
		reverse(y.begin(), y.end());
		if(s.length()%2==0)
			cout<<x<<y;
		else
			cout<<x<<0<<y;
	}	
	cout<<"\n";
}

signed main()
{
    boost
    test{
		solve();
	}
	return 0;
}
