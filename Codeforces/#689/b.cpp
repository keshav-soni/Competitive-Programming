#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n,m,count=0,sum=0,ans=0,x,y;
		cin>>n>>m;
		char a[n][m];
		int h[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
				h[i][j]=0;
			}
		}
			
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				x=j;
				y=j;
				count=0;
					while(x>=0 && y<m){
						if(a[i][x]=='*' && a[i][y]=='*'){
							x--;
							y++;
							count++;
						}
						else
							break;
					}
					h[i][j]=count;
			}				
		}
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				int t=i,sum=0;
		        while(t<n){
		            if(h[t][j]>sum){
		                t++;
		                sum++;
		            }
		            else break;		            
		        }
		    ans+=sum;					
			}					
		}
		cout<<ans<<"\n";

	}
	return 0;
}
