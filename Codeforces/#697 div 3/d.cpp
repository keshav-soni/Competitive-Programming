#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
     	ll n,m,cnt=0,sum=0;
     	bool flag=0;
     	cin>>n>>m;
     	ll a[n],b[n];
     	vector<ll> v1,v2;
     	for(ll i=0;i<n;i++)
     		cin>>a[i];
     	for(ll i=0;i<n;i++){
		 	cin>>b[i];
		 	if(b[i]==1)
		 		v1.push_back(a[i]);
		 	else
			 	v2.push_back(a[i]);	
		 }
		sort(v2.begin(),v2.end(),greater<ll>());
		sort(v1.begin(),v1.end(),greater<ll>());
//		for(ll i=0;i<v1.size();i++)
//			cout<<v1[i]<<" ";
//		cout<<"\n";
//		for(ll i=0;i<v2.size();i++)
//			cout<<v2[i]<<" ";
//		cout<<"\n";	
		
		for(ll i=0;i<v1.size();i++){
				sum+=v1[i];
				cnt++;
			if(sum>=m){
				flag=1;
				goto next;				
			}						
				
//			cout<<sum<<" "<<cnt<<endl;	
		}
		for(ll i=0;i<v2.size();i++){
				sum+=v2[i];
				cnt+=2;	
			if(sum>=m){
				flag=1;
				goto next;				
			}				
				
//			cout<<sum<<" "<<cnt<<endl;				
		}
		next :
			if(flag==1)	
				cout<<cnt;
			else
				cout<<-1;
			cout<<"\n";		
	}
	return 0;
}
