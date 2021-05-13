#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
     	ll n,m;
     	cin>>n>>m;
     	ll a[n][m];
     	for(int i=0;i<n;i++)
     		for(int j=0;j<m;j++)
     			cin>>a[i][j];
     	ll q,x,y,v,i=0,k=0,check,flag=0,r,u,check1;
     	cin>>q;
		for(int z=0;z<q;z++){
			cin>>x>>y>>v;
			a[x-1][y-1]=v;
		for (int i = 0; i < n-1; i++){
			for (int j = 0; j < m-1; j++){
				if (a[i][j] != a[i + 1][j + 1]){
					flag=1;
					goto next;
				}
			}
		}
		
		next :
		if(flag==0)
		cout<<"Yes";
		else
		 cout<<"No";	
	 	cout<<"\n";	
		 
		}
	}
	return 0;
}
