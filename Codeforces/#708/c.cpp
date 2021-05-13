#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define      all(x) 		(x).begin(),(x).end()
#define      fo(i,n)        for(ll i=0;i<n;i++)
#define      pb             push_back
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    test{
		ll n,k;
		cin>>n>>k;
		if(k>3){
			fo(i,k-3){
				cout<<1<<" ";
				n--;	
			}
		}
		if(n%2!=0)
			cout<<1<<" "<<(n-1)/2<<" "<<(n-1)/2;
		else if((n/2)%2==0)
			cout<<n/2<<" "<<n/4<<" "<<n/4;
		else
			cout<<n/2-1<<" "<<n/2-1<<" "<<2;
		cout<<"\n";

	}
	return 0;
}
