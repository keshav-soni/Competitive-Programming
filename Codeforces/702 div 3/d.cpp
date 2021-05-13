#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

ll a[200],depth[200];

void fun(ll l,ll r,ll d){
	if(l>r)
		return ;
	ll max=0,id=0;	
	for(ll i=l;i<=r;i++){
		if(max<a[i]){
			max=a[i];
			id=i;
		}
	}
	depth[id]=d;
	fun(l,id-1,d+1);
	fun(id+1,r,d+1);
}
signed main()
{
    boost
    test{
	ll n,x;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	fun(0,n-1,0);
	for(int i=0;i<n;i++)
		cout<<depth[i]<<" ";
	cout<<"\n";	
	}
	return 0;
}
