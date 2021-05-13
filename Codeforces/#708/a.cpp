#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    test{
		int n;
		cin>>n;
		ll a[n];
		map<ll,ll> m;
		vector<ll> v;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(int i=0;i<n;i++){
			m[a[i]]++;
			if(m[a[i]]<=1)
				cout<<a[i]<<" ";
			else
				v.push_back(a[i]);	
		}
		for(auto x:v)
			cout<<x<<" ";
		cout<<"\n";	
			

	}
	return 0;
}
