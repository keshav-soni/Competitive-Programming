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

void showpq(
    priority_queue<int, vector<int>, greater<int> > gq)
{
    priority_queue<int, vector<int>, 
                                greater<int> > g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}

void solve(){
	int n;
	cin>>n;
	int cnt=0;
	int t=0;
	priority_queue<int,vector<int>,greater<int>> pq2;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		pq2.push(x);
		int a[x];
		for(int i=0;i<x;i++)
			cin>>a[i];
		bool flag=0;
		int temp=x;	
		int tp=0;
		priority_queue<int,vector<int>,greater<int>> pq;
		for(int i=0;i<x-1;i++){
			tp++;
			if(a[i]>a[i+1]){
				cnt+=tp;
				temp--;
				flag=1;	
				pq.push(tp);
				tp=0;
			}
		}
		pq.push(x-cnt);
		  while(pq.size()>1){
		     int a=pq.top();
		     pq.pop();
		     int b=pq.top();
		     pq.pop();
		     cnt+=a+b;
		     pq.push(a+b);
		  }	
	}	
	
	if(n==1)
		cout<<cnt;
	else{
	  while(pq2.size()>1){
	     int a=pq2.top();
	     pq2.pop();
	     int b=pq2.top();
	     pq2.pop();
	     cnt+=a+b;
	     pq2.push(a+b);
	  }	
	  cout<<cnt;
	}	
		
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
