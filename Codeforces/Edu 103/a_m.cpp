#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
	ll n,k,ans,add = 0,b;
		cin>>n>>k;
		vector<ll>vec;
		if(n > k)
		{
			b = (n+k-1) / k;
			k  = k* b;
			b = (k+n-1)/n;
			vec.push_back(b);
		}
		else
		{
			b = (k+n-1)/n;
			vec.push_back(b);
		}
		for(ll i=0;i<vec.size();i++)
			add += vec[i];		
		if(add/k)
			ans = *max_element(vec.begin(),vec.end());
		else
			ans = *min_element(vec.begin(),vec.end());
		cout<<ans<<"\n";
	}
	return 0;
}
