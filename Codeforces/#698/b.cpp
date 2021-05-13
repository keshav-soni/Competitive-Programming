#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll q,d;
     	cin>>q>>d;
     	for(int i=0;i<q;i++){
     		ll n,x,flag=0;
			string req;
     		cin>>n;
     		req=to_string(n);
     			    size_t found = req.find(to_string(d)); 
				    if (found != string::npos) {
	     				flag=1;
					 	goto next;				    	
					}
     			
     		x=n/d;
     		
     		for(int i=x;i>0;i--){
     			req= to_string (n-d*i);
     			
     			    size_t found = req.find(to_string(d)); 
				    if (found != string::npos) {
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
		 
	}
	return 0;
}
