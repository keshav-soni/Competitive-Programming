#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		int n,a=0,b=0,c=0,d=0,e=0,f=0,ans=0,x=0,y=0;
		long long int result;
		long long int a1=0,b1=0,c1=0,d1=0,e1=0,f1=0,ans1=0;
		cin>>n;
		string s;
		cin>>s;	
		for(int i=0;i<n;i++){
			if(s[i]=='0')
				x++;
			else 
				y++;
		}
		if(x==n || y==n){
			cout<<n;
			goto next;
		}
		
		for(int i=0;i<n;i++){
			if(s[i]=='0' && s[i+1]=='1' ){
				a=1;
				i++;
				continue;
			}
			else if( s[i]=='1' && s[i+1]=='0'){
				b=1;
				i++;
				continue;
			}
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
				c=1;
				i+=2;
				continue;
			}
			else if( s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'){
				d=1;
				i+=2;
				continue;
			}
			else{
				if(s[i]=='0'){
					if(f>0)
						f--;
					e++;
				}
				else{
					if(e>0)
						e--;
					f++;				
				}
			}
		}
		ans=a+b;
		ans+=c;	
		ans+=d;
		ans+=e;
		ans+=f;
		
		
		
		for(int i=0;i<n;i++){
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]!='0'){
				a1=1;
				i++;
				continue;
			}
			else if( s[i]=='1' && s[i+1]=='0' && s[i+2]!='1' ){
				b1=1;
				i++;
				continue;
			}
			if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0'){
				c1=1;
				i+=2;
				continue;
			}
			else if( s[i]=='1' && s[i+1]=='0' && s[i+2]=='1'){
				d1=1;
				i+=2;
				continue;
			}
			else{
				if(s[i]=='0'){
					if(f1>0){
						f1--;
					}
					e1++;
				}
				else{
					if(e1>0){
						e1--;
					}
					f1++;				
				}
			}
		}
		ans1=a1+b1;
		ans1+=c1;	
		ans1+=d1;
		ans1+=e1;
		ans1+=f1;
		
		
		
		
		if(ans<ans1)
			result=ans;
		else
			result=ans1;	
		
		
		
		
		
		
		
		
		
		
		cout<<result;
		next :
		cout<<"\n";
	}
	return 0;
}
