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
		ll x , y;
		string s;
		cin>>x>>y>>s;		
		ll temp = 0;		
		for(ll i=0;i<s.size();i++)
			if(s[i] == '?')
				temp++;
		
		if(temp == s.size() || temp == s.size()-1)
			cout<<"Case #"<<z+1<<": "<<"0"<<endl;
		else
		{
			ll ans = 0,cnt = 0,p = 0,i = 0,j = 0;
			for(p=0;p<s.size()-1;p++)
				if(s[p] != '?')
					break;
			if(p == 0)
				p++;
			for(i=p;i<s.size()-1;i++)
			{
				if(s[i] == '?')
				{
					if(s[i-1] != s[i+1] && s[i+1] != '?')
					{
						if(s[i-1] == 'J')
							ans+= y;
						else
							ans+=x;
					}
				
					else if(s[i-1] != s[i+1] && s[i+1] == '?')
					{
						j = i+2;
						while(s[j] == '?' && j<s.size())
							j++;
						
						if(j == s.size())
							break;
						
						if(s[i-1] != s[j]){
							if(s[i-1] == 'J')
								ans+=y;
							else
								ans+=x;
						}
						i = j;
					}
				}			
			}
			
			for(ll i=0;i<s.size()-1;i++)
			{
				if(s[i] == 'J' && s[i+1] == 'C')
					ans+=y;
				else if(s[i] == 'C' && s[i+1] == 'J')
					ans+=x;
			}
 
	    cout<<"Case #"<<z+1<<": "<<ans<<endl;
	}
}
	return 0;
}
