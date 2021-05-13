#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,k,sum=0,ans=0;
		cin>>n>>k;
		ll a[n];
		for( int i=0;i<n;i++)
			cin>>a[i];
		sum=a[0];
		for( int i=1;i<n;i++){
			double x=a[i]*1.0/sum;
			double y= k*1.0/100;
//			cout<<x<<" "<<y<<endl;
			if( x-y>(0.0000000001)){	
				ans+=abs((a[i]*100*1.0)/k-sum);
			}			
			sum+=a[i];
		}
		cout<<ans<<"\n";	
	}
	return 0;
}
