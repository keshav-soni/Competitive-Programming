#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 			push_back
inline ll gcd(ll a, ll b)          {if (b == 0) return a;    return gcd(b, a % b);}
inline ll lcm(ll a, ll b)          {return (a / gcd(a, b) * b);}
inline bool isprime(ll n)          {ll i; for (i = 2; i <= sqrt(n); i++) {if (n % i == 0)return false;} return true;}

void swap(ll *xp, ll *yp) 
{ 
    ll temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    boost
    ll T; cin>>T;
	for(ll z=0;z<T;z++){
		ll n,x;
		cin>>n;
		vector<ll> v;
		for(ll i=0;i<n;i++){
			cin>>x;
			v.pb(x);
		}
	    ll i, j, min_idx,cnt=0; 
	  
	    for (i = 0; i < n-1; i++) 
	    { 
	        min_idx = i; 
	        for (j = i; j < n; j++) 
		        if (v[j] < v[min_idx])
		            min_idx = j;	
		            
		            
	  		cnt+=min_idx-i+1;
//	  		cout<<min_idx<<" "<<i<<endl;
	        reverse(v.begin()+i,v.begin()+min_idx+1); 
//	        for(ll i=0;i<n;i++)
//	        	cout<<v[i]<<" ";
//	        	cout<<endl;
	    } 
	    cout<<"Case #"<<z+1<<": "<<cnt<<endl;
	}
	return 0;
}
