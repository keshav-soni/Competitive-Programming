#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll a,b,n,ye,ans;
		cin>>a>>b>>n;		
		ll pow[n],health[n];		
		for(ll i=0;i<n;i++)
			cin>>pow[i];		
		for(ll i=0;i<n;i++)
			cin>>health[i];		
		for(ll i=0;i<n;i++)
		{
			ye = (health[i] + (a-1))/a;
			b -= (ye*pow[i]);
		}		
		ans = *max_element(pow,pow+n);
		if((b+ ans)<=0)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";
	}
	return 0;
}
