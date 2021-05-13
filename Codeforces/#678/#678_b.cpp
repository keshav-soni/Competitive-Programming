#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll n,k=1;
    	cin>>n;
    	if(n%2==0){
	    	for(int i=0;i<n;i++){
	    		for(int j=0;j<n;j++){
	
	    		if( j == n-1-i )	
	    		cout<<15<<" ";
	    		else if(i==j)	
	    		 cout<<4<<" ";    		 
	    		else
	    		cout<<0<<" ";
				}
				cout<<"\n";
			}
		}
		else
		{
	    	for(int i=0;i<n;i++){
	    		for(int j=0;j<n;j++){
				
				if(i == (n+1)/2-1 && (j==0 || j==n-1) )
					cout<<4<<" ";
				else if(j == (n+1)/2-1 && (i==0 || i==n-1) )
					cout<<4<<" ";
	    		else if( j == n-1-i )	
	    		cout<<15<<" ";
	    		else if(i==j)	
	    		 cout<<4<<" ";    		 
	    		else
	    		cout<<0<<" ";
				}
				cout<<"\n";
			}
		}			
		}	
    
    return 0;
}
