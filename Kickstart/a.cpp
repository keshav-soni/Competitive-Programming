#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    ll T;
	cin>>T;
	for(ll z=0;z<T;z++){
		ll n,k,cnt=0;
		cin>>n>>k;
		string s;
		cin>>s;
		for(ll i=0;i<n/2;i++){
			if(s[i]!=s[n-i-1])
				cnt++;
		}
		cout<<"Case #"<<z+1<<": "<<abs(k-cnt)<<endl;
	}
	return 0;
}
