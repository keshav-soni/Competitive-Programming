#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,mx,mn,cnt=0,temp;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++)
			cin>>a[i];
		for(ll i=0;i<n-1;i++){
			mx=max(a[i],a[i+1]);
			mn=min(a[i],a[i+1]);
			temp=mn;
			if( ceil(double(mx)/mn >2) ){
//				cout<<mx<<" "<<temp<<" "<<cnt<<endl;
				while( mx>temp ){
					if(temp==1)
						temp++;
					else	
						temp*=2;
					cnt++;
//					cout<<mx<<" "<<temp<<" "<<cnt<<endl;
				}
				cnt--;
			}			
		}	
		cout<<cnt<<"\n";
	}
	return 0;
}
