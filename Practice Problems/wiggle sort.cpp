#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,x;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
			sort(a,a+n);
		if(n%2==0){
			x=n/2;
			for(int i=0;i<n/2;i++)
				cout<<a[x-1-i]<<" "<<a[n-1-i]<<" ";
		}
		else{
			x=n/2+1;
			int i;
			for(i=0;i<n/2;i++)
				cout<<a[x-1-i]<<" "<<a[n-1-i]<<" ";
			cout<<a[x-1-i];	
		}
		cout<<"\n";
	}
	return 0;
}
