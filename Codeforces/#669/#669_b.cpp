#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,max=0,pos=0,x=0,flag=0;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>max){
			max=a[i];
			pos=i;			
			}
		}
		swap(a[pos],a[0]);
		max=0;
		pos=0;
		for(int i=1;i<n;i++){
			for(int j=i;j<n;j++){
				x=__gcd(a[0],a[j]);				
				if( x>max){
					max=x;
					pos=j;
					flag=1;
				}
			}
			if(flag==1)
				swap(a[i],a[pos]);
			flag=0;	
			max=0;
//			for(int i=0;i<n;i++)
//			cout<<a[i]<<" ";
//			cout<<endl;
		}
		
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";	
		cout<<"\n";		
	}
	return 0;
}
