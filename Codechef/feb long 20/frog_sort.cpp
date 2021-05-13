#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,x,cnt=0;
		cin>>n;
		ll weight[4],jump[4],req[4];
		
		for(int i=0;i<n;i++)
			cin>>weight[i];
		for(int i=0;i<n;i++){
			cin>>x;
			jump[weight[i]-1]=x;
			req[weight[i]-1]=i+1;
		}
		for(int i=1;i<n;i++){
			if(req[i-1]>=req[i]){
				while(req[i-1]>=req[i]){
					req[i]+=jump[i];
					cnt++;
				}				
			}
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
