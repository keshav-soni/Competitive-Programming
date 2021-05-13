#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
    	ll n;
    	cin>>n;
     	if((n&(n-1))==0)
			cout<<"NO";
		else
			cout<<"YES";
		cout<<"\n"; 
	}
	return 0;
}
