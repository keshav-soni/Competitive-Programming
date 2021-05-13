#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,x,sum=0,mx=INT_MIN;
		cin>>n;
		ll c[n],a[n],b[n],s[n];
		for(int i=0;i<n;i++)
			cin>>c[i];
		for(int i=0;i<n;i++)
			cin>>a[i];
		for(int i=0;i<n;i++)
			cin>>b[i];
		
			
		for(int i=0;i<n-1;i++)
			s[i]=abs(a[i+1]-b[i+1]);
		s[n-1]=c[n-1]-1;	
		
		sum=s[0];
		for(int i=1;i<n;i++){				
				sum+=c[i]-1+2;
				if(s[i-1]!=0 && i-1!=0)
					sum=sum-(c[i-1]-1)+(c[i-1]-1-s[i-1]);
			mx=max(mx,sum);
			if(s[i]==0)
				sum=0;
//			cout<<mx<<endl;
		}	
		cout<<mx<<"\n";	
	}
	return 0;
}
