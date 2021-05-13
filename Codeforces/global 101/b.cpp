#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
     	ll n,m,f1=0,f2=0,sum=0,sum2=0,max_sum=0,max_sum2=0;
     	cin>>n;
		ll a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]>0)
				f1++;
		}
     	cin>>m;
		ll b[m];
		for(int i=0;i<m;i++){
			cin>>b[i];
			if(b[i]>0)
			f2++; 	
		}
		if(f1==0 && f2==0){
			cout<<0;
			goto next;
		}
		
		for(int i=0;i<n;i++){
				sum+=a[i];	
				max_sum=max(max_sum,sum);
		}
		for(int i=0;i<m;i++){
				sum2+=b[i];	
				max_sum2=max(max_sum2,sum2);
		}				
		cout<<max_sum+max_sum2;
	
		 next :
		 	
		 	cout<<"\n";
	}
	return 0;
}
