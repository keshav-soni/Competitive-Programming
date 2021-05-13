#include<bits/stdc++.h>
#define ll long long int
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    test{
		ll n,ans;
		string s;
		cin>>n>>s;
		vector<ll>a(n+2),b(n+2),vec(n+2);
		s='-'+s;
		for(ll i=1;i<=n;i++)
		{
			a[i] = a[i-1];
			b[i] = b[i-1];			
			if(s[i] == '1')
				a[i]++;
			else
				b[i]++;
		}		
		ans=min(n-b[n],n-a[n]);
		for(ll i=n;i>=1;i--)
		{
			vec[i] = vec[i+1];
			if(s[i] == '1')
				vec[i]++;
			ans = min(ans,n-(vec[i]+b[i-1]));
		}		
		cout<<ans<<"\n";
	}
	return 0;
}
