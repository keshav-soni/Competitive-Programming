#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
   		ll n,cnt=0,sum=0,x;
   		cin>>n;
   		ll i=1;
	    while(cnt<n){
	    	
	    	if(cnt+i <= n){
			sum+=i*i;
			cnt+=i;
			}
			else{
				x=n-cnt;
				sum+=i*x;
				cnt=n;
			}
//			cout<<sum<<endl;
			i++;
		}
		 cout<<sum<<"\n";
	} 
	return 0;
}
