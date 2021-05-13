#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	int n,x,y,c;
     	cin>>n;
    	for(int i=0;i<n;i++){
    		cin>>c;
    		if(i==0)
    			x+=c;
    		if( x>y)
				y+=c;
			else
				x+=c;		
		}
    	if(x==y || (x%2==0 && y%2==0 ))
			cout<<"YES";
		else
			cout<<"NO";		
    	
		cout<<"\n";		 	
		 
	}
	return 0;
}
