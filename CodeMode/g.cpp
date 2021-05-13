#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
vector <tuple<ll,ll,ll>> v;
	
bool sortbyse(const tuple<ll,ll,ll>&a, const tuple<ll,ll,ll>&b){
	return (get<1>(a)<get<1>(b));
}

ll fun(ll n,ll x,ll m){
	for(ll i=0;i<m;i++){
		if( get<0>(v[i])==1 && get<1>(v[i])==n ){
			return get<2>(v[i]);
		}		
	}
	get<0>(v[x])=0;
	return 0;
} 

signed main()
{
    boost
    ll n,m,temp;
    cin>>n>>m;
    ll a,b,x,y;
    cin>>a>>b;    

	for(ll i=0;i<m;i++){
		cin>>x>>y;
		v.push_back(make_tuple(1,x,y));
	}
    sort(v.begin(),v.end(),sortbyse);
//    for(ll i=0;i<m;i++){
//    	cout<<get<0>(v[i])<<" "<<get<1>(v[i])<<" "<<get<2>(v[i])<<endl;
//	}
    map<ll,ll> mp;
    for(ll i=0;i<m;i++){
    	if(get<1>(v[i])==a){
			temp=fun(a,i,m);
	//		cout<<temp<<endl;
			while(temp!=0){		
//				cout<<temp<<" "<<i<<endl;	
				mp[temp]++;
				temp=fun(temp,i,m);
			}
		}
	}
	map<ll,ll>::iterator it;
	it=mp.begin();
	cout<<it->second;
//	for(auto x:mp)
//		cout<<x.first<<" "<<x.second<<endl;
	return 0;
}
