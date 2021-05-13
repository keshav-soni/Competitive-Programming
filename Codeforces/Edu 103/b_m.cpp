#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,k,ans =0,tp;
		cin>>n>>k;
		ll a[n],v[n];	
		for(ll i=0;i<n;i++)
			cin>>a[i];
		v[0]=a[0];
		for(ll i=1;i<n;i++)
			v[i] = v[i-1] + a[i];
		for(ll i=1;i<n;i++)
		{
			v[i-1] += ans;
			if(a[i]*100 > k*v[i-1])
			{
				tp = (a[i]*100 - k*v[i-1])/k;				
				if( (a[i]*100 - k*v[i-1] ) % k)
					tp++;
				ans+= tp;
			}
		}		
		cout<<ans<<"\n";
	}
	return 0;
}
