#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
    	set<ll> s;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				 //cout<<i<<" "<<j<<" "<<i*i*i*j*j*j<<endl;
				s.insert((i*i*i)+(j*j*j));
			}
				
		}
		for(auto x:s)
			cout<<x<<" ";

	}
	return 0;
}
