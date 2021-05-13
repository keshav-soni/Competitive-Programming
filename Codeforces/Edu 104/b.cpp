#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,k,shift;
		cin>>n>>k;
		if(n%2==0)
			cout<<(k%n?k%n:n);
		else{
			shift=(k-1)/(n/2);
			k+=shift;
			cout<<(k%n?k%n:n);
		}
		cout<<"\n";

	}
	return 0;
}
