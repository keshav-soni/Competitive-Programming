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
		double y=0;
		cin>>n>>k;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			y=((a[i]*1.0)/k);
//			cout<<"\n"<<y<<"\n";
			sum+=ceil(y);
		}
		x=sum;
		for(int i=0;i<n;i++){
			if( (a[i]+a[i+1])%k==0 ){
				x+=ceil(((a[i]+a[i+1])*1.0)/k);
				x-=ceil((a[i])*1.0/k);
				x-=ceil((a[i+1])*1.0/k);
				i++;
			}				
		}
		if(sum<x)	
			cout<<sum<<" "<<x;
		else
			cout<<x<<" "<<sum;
		cout<<"\n";		
	}
	return 0;
}
