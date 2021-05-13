#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,x,ans=0,p;
     	cin>>n>>x;
     	vector <int> v;
     	for(int i=0;i<n;i++){
			cin>>p;
			v.push_back(p);
		}
		int i;
		for(i=0;i<v.size();i++){
			if(v[i]%x==0){
				fill_n(back_inserter(v), x, v[i]/x);
				ans+=v[i];
			}
			else
				break;			
		}
		for(;i<v.size();i++){
				ans+=v[i];
		}
		
		cout<<ans<<"\n";		 
	}
	return 0;
}
