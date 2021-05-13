#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
    	ll n,x=9;
     	cin>>n;
     	if(n<=2){
     		if(n==1){
     		cout<<9;
			goto next;
			 }
			if(n==2){
				cout<<98;
				goto next;
			} 
		 }
     	cout<<989;  
		x=0;  	
		for(ll i=3;i<n;i++){
			cout<<x;
			x++;
			if(x==10)
				x=0;
		}		
		next :
		cout<<"\n"; 
	}
	return 0;
}
