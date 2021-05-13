#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;



int main()
{
    boost
    test{
     	ll n,k,sum=0;
     	cin>>n>>k;
     	ll a[n];
     	for(int i=0;i<n;i++)
     	{
		 	cin>>a[i];
		 	sum+=a[i];
		}
     	if(sum%k==0)
		 	cout<<0;
		else
		 cout<<1;
		cout<<"\n";  	
		 
	}
	return 0;
}
