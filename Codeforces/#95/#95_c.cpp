#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		ll n,turn=1,t=0;
		cin>>n;
		ll a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++){
			if(a[i]==1 && turn ==1 ){
				t++;	
//				cout<<1<<endl;
				if(a[i+1]==0)
					i++;		
			}
			if(a[i]==0 && turn ==1 ){
//				cout<<2<<endl;
				if(a[i+1]==0){
//				cout<<3<<endl;
				i++;
				}
			}
			if(a[i]==1 && turn==0){
//				cout<<5<<endl;
				if(a[i+1]==1){
//				cout<<6<<endl;	
				 i++;			 
				}
			}	

			turn = !turn;	
			
		}
		cout<<t<<"\n";
	}
	return 0;
}
