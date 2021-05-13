#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    ll s,t,c,x,y,temp=0;
    cin>>s>>t>>c;
    multimap<ll, ll> m;
    multimap<ll, ll>::iterator it,it1;
	for(ll i=0;i<c;i++){        
        cin>>x>>y;
        m.insert(pair <ll, ll> (x,y));
    }
    
   for (it=m.begin();it!=m.end();it++){
   		m.erase(it);
   		if(m.find(x))
   }

               temp++;
   cout<<temp/2;	
	return 0;
}
