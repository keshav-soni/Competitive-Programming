#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    test{
		string s;
		cin>>s;
		bool ans=false;
		for(ll i=0;i<=1;i++){
			for(ll j=0;j<=1;j++){
				for(ll k=0;k<=1;k++){
					vector<ll> v;
					for(ll l=0;l<s.length();l++){
						if(s[l]=='A')
							v.pb(i);
						else if(s[l]=='B')
							v.pb(j);
						else 
							v.pb(k);		
					}
					ll x=0;
					bool ok=true;
					for(ll p=0;p<v.size();p++){
						if(v[p]==1)
							x++;
						else 
							x--;
						if(x<0){
							ok=false;	
							break;								
						}
					}
					if(x!=0)
						ok=false;	
					if(ok)
						ans=true;	
				}
			}
		}

		cout<<( ans ? "YES" : "NO" );
		cout<<"\n";	
		
	}
	return 0;
}
