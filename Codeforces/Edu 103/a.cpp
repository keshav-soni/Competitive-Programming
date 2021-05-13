#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,k,cnt=0,sum=0;
		cin>>n>>k;
		if(n==1){
			cout<<k;
			goto next;
		}
		if(n==k){
			cout<<1;
			goto next;
		}
		while( n>=k )
			k+=k;
//		cout<<k<<endl;	
		cout<<ceil((double)k/n);
	next :
	   cout<<"\n";
	}
	return 0;
}
