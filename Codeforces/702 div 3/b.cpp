#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

signed main()
{
    boost
    test{
		ll n,cnt=0,flag=0,x,diff=0;
		cin>>n;
		ll a[3]={0,0,0};
		
		for(ll i=0;i<n;i++){
	        cin >> x;
	        a[x % 3]++;		
		}
		while(1){
			for(ll i=0;i<3;i++){
				if(a[i]>n/3){
					diff=a[i]-n/3;	
					a[(i+1)%3]+=diff;
					a[i]-=diff;
					cnt+=diff;
				}			
			}
//			for(int i=0;i<3;i++)
//				cout<<a[i]<<" ";
//				cout<<endl;
	
			for(int i=0;i<3;i++){
				if(a[i] != n / 3){
					flag = 1;
				}
			}		
			if(flag==0){
				break;
			}
			
			flag=0;
			
		}
	cout<<cnt<<"\n";

	}
	return 0;
}
