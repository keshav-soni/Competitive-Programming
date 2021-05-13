#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
		ll n,k,temp=1,flag=0;
		cin>>n>>k;
		ll a[n],b[n],p[k],extra[n];
		for(ll i=0;i<n;i++){
			a[i]=temp;
			if(i<k-1)
				temp++;
			else
				temp--;					
		}
		for(ll i=0;i<n;i++){
			extra[i]=a[i];
			b[i]=a[i];
		}

		next_permutation(extra, extra+n);
		sort(a,a+n);
		for( ll i=0;i<n;i++ ){
			if(b[i]!=a[i]){
				flag=1;
				break;
			}
		}
		if(flag==0){
			for(ll i=0;i<n;i++)
			cout<<a[i]<<" ";
			goto next;			
		}
//		for(ll i=0;i<n;i++)
//			cout<<extra[i]<<" ";		
//		cout<<endl;
		for( ll i=n-1;i>=0;i-- )
			p[a[i]-1]=extra[i];			
		
		for(ll i=0;i<k;i++)
			cout<<p[i]<<" ";
	next :		
		cout<<"\n";
		
	}
	return 0;
}
