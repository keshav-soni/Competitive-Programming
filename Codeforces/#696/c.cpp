#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

ll fun(ll x){
	for()
	
	
}

signed main()
{
    boost
    test{
     	ll n,x;
     	cin>>n;
     	n=n*2;
     	multiset<ll,ll> s;
     	multiset<int, int>::reverse_iterator  it1,it2;
     	for(ll i=0;i<n;i++){
     		cin>>x;
		 	s.insert(x);
		}
		for(it1=s.rbegin();it1!=s.rend();it1++){
			auto a=*it1;
			s.erase(it1);
			for(it2=s.rbegin()+1;it2!=s.rend();it2++){
				auto b=*it2;
				s.erase(it2);
				ll x=a+b;
				
				fun(x);
				
			}
			
			
			
		}
		
			 
	}
	return 0;
}
