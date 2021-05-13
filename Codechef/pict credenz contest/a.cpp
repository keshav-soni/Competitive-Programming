#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
   	  ll n,k,b;
	  cin>>n>>k>>b;
	  ll a[n],visit[n];
	  for(int i=0;i<n;i++){
	  	cin>>a[i];
	  	visit[i]=0;
	  }
	  sort(a,a+n,greater<ll>());		
	  int i=0;	
	  for(int j=0;j<k;j++){
	  	next:	
	  		if( a[i]>a[i+1] && visit[i]<=b )
				sum+=ceil(double(a[i]/3));
	  			visit[i]++;
	  		else{
	  			i++;
	  			goto next;
			  }
	  }
	   				 
	}
	return 0;
}
