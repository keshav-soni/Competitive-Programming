#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
int main()
{
    boost
    test{
		ll n,k,temp=1;
		cin>>n>>k;
		ll a[n],b[n],p[k],extra[n];
		for(ll i=0;i<n;i++){
			a[i]=temp;
			if(i<k-1)
				temp++;
			else
				temp--;					
		}
		for(ll i=0;i<n;i++)
			extra[i]=a[i];

		next_permutation(extra, extra+n);
		
		for( ll i=n-1;i>=0;i++ )
			p[a[i]]=b[i];			
		
		for(ll i=0;i<k;i++)
			cout<<p[i]<<" ";
		cout<<"\n";
		
	}
	return 0;
}
