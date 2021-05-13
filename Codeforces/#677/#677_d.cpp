#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n,flag=0;
		cin>>n;
		ll a[n],check[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			check[i]=0;
		}
		for(int i=0;i<n;i++){
			if(a[0]!=a[i]){
				flag++;
				break;
			}			
		}
		if(flag==0){
			cout<<"NO";
			goto next;
		}
		else{
			cout<<"YES";
			for(int i=0;i<n;i++)
				for(int j=0;j<n;j++)
				{
					if(a[i]!=a[j] && ( check[i]==0 || check[j]==0 ) ){
						cout<<"\n";
						cout<<i+1<<" "<<j+1;
						check[i]=1;
						check[j]=1;
					}						
				}			
		}			
		next:
			cout<<"\n";
	}
	return 0;
}
