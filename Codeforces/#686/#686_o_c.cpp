#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,x=0,y=0;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n-1;i++){
			if(a[i]<a[i+1])
				x++;
		}	
		for(int i=0;i<n-1;i++){
			if(a[i]>a[i+1])
				y++;
		}
		cout<<min(x,y)<<"\n";	
	}
	return 0;
}
