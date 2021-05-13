#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,x,sum=0,max=1,temp=2,f=0,y;
     	cin>>n;
     	vector<ll> v;
     	for(ll i=0;i<n;i++){
     		cin>>x;
     		v.push_back(x);
		}	
		if(n<3){
			cout<<0;
			goto next;
		} 
		 y=v[0];
     	for(ll i=0;i<n;i++){
     		if(y!=v[i])
     			f=1;
		}
		if(f==0){
			cout<<0;
			goto next;
		}
		for(ll i=1;i<n-1;i++){
			if(v[i]<v[i-1] && v[i]<v[i+1]){
				sum++;
				if(temp==1)
					max++;
				
				temp=0;	
			}
			else if(v[i]>v[i-1] && v[i]>v[i+1]){
				sum++;
				if(temp==0)
					max++;
				temp=1;
			}
			else
				temp=2;
		} 
//		cout<<max<<" "<<sum<<" "<<temp<<endl;
			if(max>=3)
				cout<<sum-3;
			else if(max==2)
				cout<<sum-2;	
			else if(sum>0 || max==1)
				cout<<sum-1;
			else
				cout<<sum;		
		next :		
			cout<<"\n";	
		 
	}
	return 0;
}
