#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		char a[n][n];
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)		
				cin>>a[i][j];
	
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)		
				cout<<a[i][j];
								
		if(a[0][1]==1 && a[1][0]==1 && a[1][1]==1 || a[n-2][n-1]==1 && a[n-1][n-2]==1 && a[n-2][n-2]==1 || a[0][1]==0 && a[1][0]==0 && a[1][1]==0  ||   a[n-2][n-1]==0 && a[n-1][n-2]==0 && a[n-2][n-2]==0 )
			cout<<0;
		else if(a[0][1]==0 && a[1][0]==1 ||  a[0][1]==1 && a[1][0]==0  ){
			cout<<1;
			if(a[1][1]==0)
				cout<<1<<" "<<2;
			else
				cout<<2<<" "<<1;
			cout<<"\n";
		}
		else if( a[0][1]==1 && a[1][0]==1 && a[1][1]==0 ){
			if( a[n-2][n-1]==1 && a[n-1][n-2]==0 && a[n-2][n-2]==1 ){
				cout<<1;
				cout<<n-1<<" "<<n;
				cout<<"\n";
				goto next;
			}
			if(  a[n-2][n-1]==0 && a[n-1][n-2]==1 && a[n-2][n-2]==0 ){
				cout<<1;
				cout<<n<<" "<<n-1;
				cout<<"\n";
				goto next;
			}
			cout<<2;
			cout<<1<<" "<<2<<"\n";
			cout<<2<<" "<<1<<"\n";
		}
		next:
			;
	}
	return 0;
}
