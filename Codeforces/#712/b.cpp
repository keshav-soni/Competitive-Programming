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
    test{
		ll n;
		string a,b;
		cin>>n>>a>>b;
		int c[n];
		ll t0=0,t1=0;
		for(ll i=0;i<n;i++){
			if(a[i]=='0')
				t0++;
			else
				t1++;
			if(t0==t1)	
				c[i]=1;
			else
				c[i]=0;		
		}
		
		ll flag=0,temp=0;
		for(ll i=n-1;i>=0;i--){
			if(flag==0){
				if(a[i]==b[i])
					continue;
				if(a[i]!=b[i] && c[i]==1)	
					flag=1;
				else{
					temp=1;
					break;
				}							
			}
			else{
				if(a[i]!=b[i])
					continue;
				if(a[i]==b[i] && c[i]==1)
					flag=0;
				else{
					temp=1;
					break;
				}		
			}
		}
			if(temp)
				cout<<"NO";
			else
				cout<<"YES";
			cout<<"\n";		
	}
	
	return 0;
}
