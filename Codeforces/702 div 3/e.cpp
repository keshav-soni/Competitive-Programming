#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,sum=0,mx=INT_MIN;
		cin>>n;
		ll a[n],b[n];
		vector<ll> v;
		for(ll i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for(ll i=0;i<n;i++){
			sum+=a[i];
			b[i]=sum;				
		}
		for(auto x:b)
			cout<<x<" ";
			cout<<endl;
		for(ll i=0;i<n-1;i++){
			cout<<b[i]<<" "<<a[n-1]<<endl;
			if(b[i]>=a[n-1])
				v.push_back(i+1);
			else 
				break;	
		}
		v.push_back(n);
		cout<<v.size()<<"\n";
		for(auto x:v)
			cout<<x<<" ";
		}		
		cout<<"\n";	
	
	return 0;
}
