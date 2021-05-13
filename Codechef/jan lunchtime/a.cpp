#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,cnt=0,even=0,odd=0;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]%2==0)
				even++;
			else
				odd++;	
		}
		if(even>odd){
			for(int i=0;i<n;i++){
				if(a[i]%2!=0){
					a[i]++;
					cnt++;
				}
			}	
		}
		else{
			for(int i=0;i<n;i++){
				if(a[i]%2==0){
					a[i]--;
					cnt++;
				}
			}	
		}
		cout<<cnt<<"\n";

	}
	return 0;
}
