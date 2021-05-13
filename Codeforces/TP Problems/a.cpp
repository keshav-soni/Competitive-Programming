#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,m,r,c;
     	cin>>n>>m>>r>>c;
     	ll a,b,x,d;
        a=abs(1-r)+abs(1-c);
        b=abs(1-r)+abs(m-c);
        x=abs(n-r)+abs(1-c);
        d=abs(n-r)+abs(m-c);
        cout<<max(max(max(a, b), x), d)<<endl;
	}
	return 0;
}
