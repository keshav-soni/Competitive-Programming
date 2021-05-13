#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,d,flag=0,x=0;
		cin>>n>>d;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>d)
				x=1;
		}
		if(x==0){
			cout<<"YES";
			goto next;
		}	
		for(ll i=0;i<n;i++){
			for(ll j=0;j<n;j++){
				if(a[i]+a[j]<=d && i!=j)
					flag=1;
			}
		}
		if(flag==1)
			cout<<"YES";
		else
			cout<<"NO";
	next :	
		cout<<"\n";			
	}
	return 0;
}
