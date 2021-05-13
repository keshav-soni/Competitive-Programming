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
    ll T; cin>>T;
	for(ll z=0;z<T;z++){
		ll x,y,ans=0;
		string s;
		cin>>x>>y>>s;
		string a,b;
		a=s;
		b=s;
		
		for(ll i=0;i<s.length()-1;i++){
			if(s[i]=='C' && s[i+1]=='J')
				ans+=x;
			else if(s[i]=='J' && s[i+1]=='C')
				ans+=y;			
		}
		for(ll i=0;i<s.length();i++){
			if(s[i]=='?'){
				a[i]='J';
				b[i]='C';
			}
			else{
				a[i]=s[i];
				b[i]=s[i];
			}					
		}
		
		for(ll i=0;i<s.length();i++){
			if(s[i]=='?'){
				ll val_a=0,val_b=0;
				if(i<s.length()-1)
					if( a[i+1] == 'C' )
						val_a+=y;
				if(i>0)	
					if(a[i-1]=='C')
						val_a+=x;
				if(i<s.length()-1)	
					if(b[i+1]=='J')
						val_b+=x;
				if(i>0)		
					if(b[i-1]=='J')
						val_b+=y;	
//				cout<<min(val_a,val_b)<<" "<<i<<endl;
						
				ans+=min(val_a,val_b);		
			}	
		}
		


	    cout<<"Case #"<<z+1<<": "<<ans<<endl;
	}
	return 0;
}
