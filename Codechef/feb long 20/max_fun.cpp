#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

signed main()
{
    boost
    test{
		ll n,p,l=0,m,ans=0;
		cin>>n;
		ll arr[n];
		ll h=n-1;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		
		sort(arr,arr+n);
		
		p=round(double(arr[0]+arr[n-1])/2);
		
		while(l<=h){
			m=(l+h)/2;
			if(p==arr[m]){
				break;
			}				
			else if(p<arr[m]){
				h=m-1;
			}
			else{
				l=m+1;					
			} 
		}
		
		ans=abs(arr[0]-arr[m]);
		ans+=abs(arr[m]-arr[n-1]);
		ans+=abs(arr[0]-arr[n-1]);
		cout<<ans<<"\n";
	}
	return 0;
}
