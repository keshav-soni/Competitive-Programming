#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n/2;i++){
			cout<<a[i]<<" "<<a[n-1-i]<<" ";			
		}
		if(n%2!=0)
			cout<<a[n/2];
			
		cout<<"\n";		
		
	}
	return 0;
}
