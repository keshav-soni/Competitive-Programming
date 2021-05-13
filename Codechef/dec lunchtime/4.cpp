#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
     	int n,x,one=0,zero=0,one1=0,zero1=0;
     	cin>>n;
     	for(int i=0;i<n;i++){
     		cin>>x;
     		if(x==1)
     			one++;
     		else
			 	zero++;	
		}
		for(int i=0;i<n;i++){
     		cin>>x;
     		if(x==1)
     			one1++;
     		else
			 	zero1++;	
		}
		if(one==one1 && zero==zero1)
			cout<<"Yes";
		else
			cout<<"No";	
			cout<<one<<" "<<zero<<" "<<one1<<" "<<zero1; 
		cout<<"\n";		 
	}
	return 0;
}
