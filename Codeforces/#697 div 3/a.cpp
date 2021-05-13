#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,flag=0;
     	cin>>n;
     	if(n%2!=0){
     		flag=1;
     		goto next;	
		 }
     		
     	if(n%3==0){
     		flag=1;
     		goto next;
		 }
     	for(ll i=5;i*i<=n;i=i+6){
     		if(n%i==0){
     			flag=1;
     			break;
			 }
		 }
		next : 
		if(flag==1)
			cout<<"YES";
		else
			cout<<"NO";	 	
		 cout<<"\n";
	}
	return 0;
}
