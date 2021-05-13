#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
		int n,m,sum=0;
		float x;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				sum+=a[i][j]; 
			}
		}
		x=( sum*1.0 )/(n*m);
//		cout<<x<<" ";
		round(x);
		sum=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				sum+=abs( a[i][j] - x );
			}
		}
		cout<<sum<<"\n";		
	}
	return 0;
}
