#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,x,y,t1,t2;
		cin>>n;
		vector<ll> v1,v2;
		for(int i=0;i<n;i++){
			cin>>x>>y;
			v1.push_back(x);
			v2.push_back(y);
		}
		
		sort(v1.begin(),v1.end());
		sort(v2.begin(),v2.end());
		
		if(n%2==1){
			cout<<1;
		}
		else{
			t1=v1[n/2]-v1[n/2-1]+1;
			t2=v2[n/2]-v2[n/2-1]+1;
			cout<<t1*t2;
		}
		 cout<<"\n";
		
	}
	return 0;
}
