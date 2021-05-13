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
	for(ll z=0;z<T;z++)	{		
		ll r,c,cnt=0,ans=0,b=0;
		cin>>r>>c;
		ll a[r][c],up[r][c]={},down[r][c]={},left[r][c]={},right[r][c]={}; 
		
		for(ll i=0;i<r;i++)
			for(ll j=0;j<c;j++)
				cin>>a[i][j];
		
        for(ll i=0;i<c;i++)
        {
            up[0][i] = a[0][i];
            down[r-1][i] = a[r-1][i];
        }
        for(ll i=0;i<r;i++)
        {
            left[i][0] = a[i][0];
            right[i][c-1] = a[i][c-1];
        }
        cnt = 0;
        
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++){
                if(a[i][j] == 1){
                    if(i > 0)
						up[i][j] = up[i][j] + up[i-1][j] + 1;
                    if(j > 0)
						left[i][j] = left[i][j] + left[i][j-1] + 1;
				}
            } 
        }
        
        
        for(ll i=r-1;i>=0;i--)
        {
            for(ll j=c-1;j>=0;j--)
            {
                if(a[i][j] == 1)
                {
                    if(i < (r-1))
						down[i][j] = down[i][j] + down[i+1][j] + 1;
                    if(j < (c-1))
						right[i][j] = right[i][j] + right[i][j+1] + 1;
                }
            }
        }
		ans=0;
		b=0;
        for(ll i=0;i<r;i++)
        {
            for(ll j=0;j<c;j++)
            {
                if(a[i][j] == 1)
				{
                    if(left[i][j] > 1)
						ans += max(b,min( left[i][j] , up[i][j] / 2) - 1)+max(b , min(left[i][j], down[i][j]/2 ) -1);
                    if(up[i][j] > 1)
						ans += max(b , min(left[i][j]/2 , up[i][j]) - 1) + max(b , min(right[i][j] / 2,up[i][j]) - 1);
                    if(right[i][j] > 1)
						ans += max(b , min(right[i][j] , up[i][j]/2 ) - 1) + max(b , min(right[i][j], down[i][j]/2) - 1);
                    if(down[i][j]>1)
						ans += max(b , min(left[i][j]/2 , down[i][j]) - 1) + max(b , min(right[i][j]/2 , down[i][j]) - 1);
                }
            }
        }
        
        cout<<"Case #"<<z+1<<": "<<ans<<endl;
	}
	return 0;
}
