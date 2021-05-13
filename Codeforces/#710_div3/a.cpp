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
		ll n,m,x;
		cin>>n>>m>>x;
		ll i,j;
		x--;
		i=x%n;
		j=x/n;
		cout<<i*m+j+1<<endl;

	}
	return 0;
}
