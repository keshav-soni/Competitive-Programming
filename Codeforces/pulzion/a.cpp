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
	ll n,k;
	cin>>n>>k;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];		
	}
	int temp=1;
	for(ll i=0;i<(n/k)/2;i++){
			reverse(a+temp*k,a+(temp+1)*k);
		temp+=2;
	}
//	for(ll i=0;i<n;i++)
//		cout<<a[i]<<" ";
//	cout<<"\n";
	for(ll i=0;i<n;i++){
		if(i%k==0 && i!=0)
			i+=k-1;
		cout<<a[i]<<" ";
				
	}	
	cout<<"\n";
	return 0;
}
