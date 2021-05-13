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
    	ll flag=0;
		string s;
		cin>>s;
		for(ll i=0;i<s.length();i++)
			if(s[i]!='a')
				flag=1;
				
		if(flag==1){
			ll temp=0;
			cout<<"YES";
			cout<<endl;
			s=s+'a';
			for(ll i=0;i<s.length()/2;i++){
				if(s[i]!=s[s.length()-i-1])
					temp=1;
			}
			if(temp==1)
				cout<<s;
			else{
				s='a'+s;
				for(ll i=0;i<s.length()-1;i++){
					cout<<s[i];	
				}
			}
				
		}
		else
			cout<<"NO";
		cout<<"\n";	
		
	}
	return 0;
}
