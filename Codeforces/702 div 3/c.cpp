#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
	map<ll,ll> m;
	for(ll i=1;i<10000;i++){
		m[i*i*i]++;
	}
    test{
		ll n,flag=0;
		cin>>n;

		for(auto it=m.begin();it!=m.end();it++){
			if(n-it->first>0){
				if(m.find(n-it->first)!=m.end()  ){
					flag=1;
					break;
				}
			}
			else
				break;
		}
		if(flag==1)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";	
//		for(auto it=m.begin();it!=prev(m.end(),7900);it++)
//			cout<<it->first<<" ";	
	}
	return 0;
}
