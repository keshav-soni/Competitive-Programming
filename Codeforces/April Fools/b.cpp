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

int floorSqrt(int x)
{
    // Base cases
    if (x == 0 || x == 1)
    return x;
  
    // Staring from 1, try all numbers until
    // i*i is greater than or equal to x.
    int i = 1, result = 1;
    while (result <= x)
    {
      i++;
      result = i * i;
    }
    return i - 1;
}


signed main()
{
    boost
    int n;
    cin>>n;
    cout<<floorSqrt(n)<<"\n";
	return 0;
}
