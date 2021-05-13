#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,sum=0,x=0;
		cin>>n>>k;
		ll a[n*k];
		for(int i=0;i<n*k;i++)
			cin>>a[i];
		x=ceil(n/2.0);
		for(int i=k*(x-1); i<n*k ; i+=n-x+1){
			sum+=a[i];
//			cout<<a[i]<<" ";
		}
		cout<<sum<<"\n";
	}
	return 0;
}
