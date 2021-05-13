#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
    boost
    test{
		ll n,u,r,d,l;
		ll flag=0,extra_r=0,extra_l=0,optional=0;
		cin>>n>>u>>r>>d>>l;
		if(n-u==1)
			optional+=1;
		else if(n-u==0){
			extra_r+=1;
			extra_l+=1;
		}
		if(n-d==1)
			optional+=1;
		else if(n-d==0){
			extra_r+=1;
			extra_l+=1;
		}
	
		if(optional==1){
			if(extra_r-r-1>0 && extra_l+1>l){
				flag=1;
				goto next;
			}
			if(extra_l-l-1>0 && extra_r+1>r){
				flag=1;
				goto next;
			}
		}
		if(optional==2){
			if(extra_r-r-2>0 && extra_l+2>l){
				flag=1;
				goto next;
			}
			if(extra_l-l-2>0 && extra_r+2>r){
				flag=1;
				goto next;
			}
		}
		
		if(extra_r>r){
		flag=1;
		goto next;			
		}
		if(extra_l>l){
				flag=1;
				goto next;			
		}	

	next :	
		if(flag==1)
			cout<<"NO";
		else 
			cout<<"YES";
		cout<<"\n";		
		cout<<extra_r<<" "<<extra_l<<endl;
	}
	return 0;
}
