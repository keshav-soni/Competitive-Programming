#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		char s[n][m];
		int a[n][m],x=0,b=0,c=0,d=0,temp=0;
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				cin>>s[i][j];
		
		for(int i=0;i<n;i++)
			for(int j=0;j<m;j++)
				a[i][j]=s[i][j]-'0';
		
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				if(a[i][j]==1)
					x++;
				if(a[i][j+1]==1)
					b++;
				if(a[i+1][j]==1)
					c++;
				if(a[i+1][j+1]==1)
					d++;
				temp+=x;
				temp+=b;
				temp+=c;
				temp+=d;		
				if(temp==3){
					if(x==1)
						cout<<i+1<<" "<<j+1<<" ";
					if(b==1)	
						cout<<i+1<<" "<<j+2<<" ";
					if(c==1)
						cout<<i+2<<" "<<j+1<<" ";
					if(d==1)
						cout<<i+2<<" "<<j+2<<" ";	
					
					cout<<"\n";
					
					if(m-1-j>=2)
						j++;
					else{
						i++;			
						break;
					}
				}					
				temp=0;
				x=0;
				b=0;
				c=0;
				d=0;			
			}
			
		}
		
		
		
						
	}
	return 0;
}

