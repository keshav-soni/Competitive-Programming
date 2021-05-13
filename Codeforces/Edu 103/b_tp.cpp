#include<bits/stdc++.h>
#define ll long long int
using namespace std;
signed main()
{
    ll t; 
	cin>>t; 
	while(t-->0){
		ll n,k;
		cin>>n>>k;
		float vv[n],rr=0,req=0;
		for( int i=0;i<n;i++)
			cin>>vv[i];
		rr=vv[0];
		for( int i=1;i<n;i++){
			double ttt=vv[i]*1.0/rr,yyy= k*1.0/100;
			if( ttt-yyy>(0.00000000001))	
				req+=floor((vv[i]*100*1.0)/k-rr);
			rr+=vv[i];
		}
		cout<<req<<"\n";	
	}
	return 0;
}
