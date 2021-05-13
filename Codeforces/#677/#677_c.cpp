#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,max=0,flag=0;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>max){
				max=a[i];				
			}
		}
		for(int i=0;i<n;i++){
			if(a[0]!=a[i]){
				flag++;
				break;
			}			
		}
		if(flag==0){
			cout<<-1;
			goto next;
		}
		
		for(int i=1;i<n;i++)
		{
			if( a[i-1]<a[i] && ( a[i]+1 )>max ){
				cout<<i+1;
				goto next;	
			}
		}	
		for(int i=0;i<n-1;i++)
		{
			if( a[i] > a[i+1] && ( a[i]+1 )>max ){
				cout<<i+1;	
				goto next;
			}
		}
		next :
			cout<<"\n";
	}
	return 0;
}
