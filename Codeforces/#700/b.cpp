#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll a,b,n,cur_i=0;
		cin>>a>>b>>n;
		ll pow[n],h[n];
		for(int i=0;i<n;i++)
			cin>>pow[i];
		for(int i=0;i<n;i++)
			cin>>h[i];
		ll cur_health=b;
		ll ye;
		
		for(int i=0;i<n;i++)
				cur_health-=ceil(double(h[i])/a)*pow[i];

		ll ans=*max_element(pow,pow+n);		
		if( cur_health+ans <=0 )
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n";					

	}
	return 0;
}
