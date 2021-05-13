#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,ans=0,sum=0;
		cin>>n;
		ll a[n],b[n],c[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];
		}
		sort(a,a+n);	
		if(n%2==0){
			ans=(a[(n/2)-1]+a[(n/2)])/2;
		}	
		else
			ans=a[((n+1)/2)-1];
		
		for(int i=0;i<=n/2;i+=2){
			b[i]=ans;
			b[i+1]=1;
		}		
		if(n%2!=0)
			b[n-1]=ans;

		for(int i=0;i<=n/2;i+=2){
			c[i]=1;
			c[i+1]=ans;
		}		
		if(n%2!=0)
			c[n-1]=1;
			
		ll s1=0,s2=0;
		for(int i=0;i<n;i++){
			s1+=abs(a[i]-b[i]);
		}
		s1=s1*2;
		
		for(int i=0;i<n;i++){
			s2+=abs(a[i]-c[i]);
		}
		s2=s2*2;
			
		if(s1<=sum){
			for(int i=0;i<n;i++)
				cout<<b[i]<<" ";	
		}
		else{
			for(int i=0;i<n;i++)
				cout<<c[i]<<" ";	
		}				
							
		cout<<"\n";	
	}
	return 0;
}
