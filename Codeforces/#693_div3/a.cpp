#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll w,h,n;
     	cin>>w>>h>>n;
     	if(n==1)
     		cout<<"YES";
     	else if(w%2!=0 && h%2!=0)
     		cout<<"NO";
		else{
			if(w%2==0 && w>=n)
				cout<<"YES";
			else if( h%2==0 && h>=n )
				cout<<"YES";
			else if( w%2==0 && h%2==0 && (w*h)>=n)
				cout<<"YES";	
			else
			 	cout<<"NO";		
		}
				
		cout<<"\n"; 
	}
	return 0;
}
