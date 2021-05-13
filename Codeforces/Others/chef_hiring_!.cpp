#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,even=0,odd=0;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			if( (i+1)%2==0)
				even+=a[i];
			else
				odd+=a[i];			
		}	
		if(even>odd)
			cout<<even;
		else
			cout<<odd;
		cout<<"\n";	
	}
	return 0;
}
