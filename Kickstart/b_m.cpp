#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
signed main()
{
    boost
    ll T;
	cin>>T;
	for(ll z=0;z<T;z++){
		ll n,m;
		cin>>n>>m;
		ll a[n][m],b[n][m];
		ll r[n],c[m];
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				cin>>a[i][j];
				b[i][j]=0;
			}
		}
		
		for(ll i=0;i<n;i++){
			for(ll j=0;j<m;j++){
				if(a[i][j]==1){
					if(i>0){
						for(ll i1=0;i1<i;i1++)
							if(a[i1][j]==1)
								up++;
							else
								up=0;	
					}
					if(i<n-1){
						for(ll i2=n-1;i2>i;i2--){
							if(a[i2][j]==1)
								down++;
							ele
								down=0;	
						}
					}
					if(j>0 && (up>0||down>0) ){
						for(ll j1=0;j1<j;j1++){
							if(a[i][j1]==1)
								right++;
							else
								right=0;	
						}
					}
					if(j<m-1 && (up>0||down>0)){
						for(ll j2=m-1;j2>j;j2--){
							if(a[i][j2]==1)
								left++;
							else
								left=0;	
						}
					}
					if(left>0)
						left++;
					if(right>0)
						right++;
					if(up>0)
						up++;
					if(down>0)
						down++;			
					ll temp1=2;
					ll temp2=left;
					while(temp1*2<=left  ){
						cnt++;
						temp1++;
					}	
								
				}
			}
		}

	}
	return 0;
}
