#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
 //   boost
	ll n;
	cin>>n;
	if(n<=3)
		cout<<"NO";
	else if(n%2==0)
		cout<<"YES";
	else
	 	cout<<"NO";
	cout<<"\n";	 	
	return 0;
}
