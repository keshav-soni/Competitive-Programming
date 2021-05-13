#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		string s;
		cin>>s;
		ll n=s.size();
		if(n<=10)
			cout<<s;
		else{
			cout<<s[0]<<n-2<<s[n-1];
		}
		cout<<"\n";
	}
	return 0;
}
