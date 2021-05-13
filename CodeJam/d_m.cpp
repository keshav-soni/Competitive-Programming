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
	ll t,n,q;
	cin>>t>>n>>q;
	while(t--)
	{
		cout<<"1 2 3"<<endl;
		vector<ll>v;		
		ll x;
		cin>>x;		
		if(x==2)
		{
			v.pb(1);
			v.pb(2);
			v.pb(3);	
		}
		else if(x==3)
		{
			v.pb(1);
			v.pb(3);
			v.pb(2);
		}
		else
		{
			v.pb(2);
			v.pb(1);
			v.pb(3);
		}		
		ll o = 3,j = 0;
		for(ll i=4;i<=n;i++)
		{
			j = 0;
			ll temp = o-1;
			while(j < temp)
			{
				ll m = j + ((temp - j)/2);
				cout<<v[m]<<" "<<v[m+1]<<" "<<i<<endl;
				cin>>x;				
				if(x == v[m])
					temp = m;
				else if(x == v[m+1])
					j = m+1;
				else
				{
					v.insert(v.begin()+m+1 , i);
					o++;
					break;
				}
			}			
			if(o != i)
			{
				if(j == 0)
					v.insert(v.begin(), i);
				else
					v.pb(i);
				o++;
			}
		}		
		for(ll i=0;i<v.size();i++)
			cout<<v[i]<<" ";			
		cout<<endl;
		cin>>x;
		if(x == -1)
			break;		
	}
	return 0;
}
