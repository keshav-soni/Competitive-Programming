#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
	ll n;
	cin>>n;
	vector<ll> a(n);
	map <ll,ll> m,m2;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector <ll> v1,v2;
	vector <ll>::iterator it1,it2;
	
	ll x,y,flag=0;
	x=a[0];
	y=0;
	v1.push_back(a[0]);
	for(ll i=1;i<n;i++){

		if(a[i]==x){
			v2.push_back(a[i]);
			y=a[i];
		}
		else if(a[i]==y){
			v1.push_back(a[i]);
			x=a[i];
		}
		else{
			
			it1 = find(a.begin()+i+1, a.end(), x);
			it2 = find(a.begin()+i+1, a.end(), y);
			ll d1=distance(a.begin()+i+1, it1);
			ll d2=distance(a.begin()+i+1, it2);
			if( i+1!=n-1 && d1>d2){
				v2.push_back(a[i]);
				y=a[i];
			}
			else{
				v1.push_back(a[i]);
				x=a[i];
			}
		}
	}

//	for(auto x: v1)
//		cout<<x<<" ";
//		cout<<"\n";
//	for(auto x: v2)
//		cout<<x<<" ";
//		cout<<"\n";
	ll cnt=0;
	if( v2.size()!=0 )
		cnt=2;
	else 
		cnt=1;	
	for(ll i=1;i<v1.size();i++){
		if( v1[i]!=v1[i-1] )
			cnt++;
	}
	for(ll i=1;i<v2.size();i++){
		if( v2[i]!=v2[i-1] )
			cnt++;
	}	
	

//	cout<<v1.size()<<" "<<v2.size()<<"\n";
	cout<<cnt<<"\n";
	return 0;
}
