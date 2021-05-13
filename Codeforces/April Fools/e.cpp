#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 			push_back
inline ll gcd(ll a, ll b)          {if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a, ll b)          {return (a / gcd(a, b) * b);}
inline bool isprime(ll n)          {ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}

const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
		ll n,m,mid=0,up=0,down=0;
		cin>>n>>m;
		char a[n][m];
		for(ll i=0;i<n;i++)
			for(ll j=0;j<m;j++)
				cin>>a[i][j];	
		if(n==1 && m==1){
			if(a[0][0]=='*')
				cout<<1;
			else
				cout<<0;	
			goto next;	
		}
		if(n==1 && m>1){
			ll cnt=0;
				for(ll j=0;j<m;j++){
					if(a[0][j]=='*')
						cnt++;
				}
			cout<<cnt;
			goto next;
		}			
		if(m==1 && n>1){
			ll cnt=0;
			for(ll i=0;i<n;i++){
					if(a[i][0]=='*')
						cnt++;
			}
			cout<<cnt;
			goto next;
		}
			
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(i==j && a[i][j]=='*')
					mid++;
				if(j-i==1 && a[i][j]=='*'){
					up++;
				}
				if(i-j==1  && a[i][j]=='*'){
					down++;
				}
			}								
		}
		cout<<max(mid+up,mid+down);
	next :
		cout<<"\n";	
	return 0;
}
