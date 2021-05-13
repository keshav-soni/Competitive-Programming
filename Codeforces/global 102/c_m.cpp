#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
		ll n,k,res;
		cin>>n>>k;		
		res= k - (n - k);		
		for(ll i=1;i<res;i++)
			cout<<i<<" ";		
		for(ll i=k;i>=res;i--)
			cout<<i<<" ";		
		cout<<"\n";
	}
	return 0;
}
