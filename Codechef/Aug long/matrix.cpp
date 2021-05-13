#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,ans=0,count=0;
		cin>>n;
		int m[n][n];
		int a[n];
		for(int i=0;i<n;i++)
			a[i]=i+1;
			
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				cin>>m[i][j];
				
		for(int i=1;i<n;i++){
			if(a[i]!=m[0][i])
				a[i]=1;
			else 
				a[i]=0;		
		}

		for(int i=n-1;i>0;i--){
			if(a[i]!=0){
				ans++;
				a[i]=0;
				for(int j=1;j<i;j++){
					if(a[j]==1)
						a[j]=0;
					else
						a[j]=1;	
				}
			}
		}

//		for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
								
		cout<<ans<<"\n";
		
		
	}
	return 0;
}
