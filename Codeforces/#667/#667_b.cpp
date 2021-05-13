#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
	long long int a,b,x,y,n,flag=0,s1=0,s2=0;
	cin>>a>>b>>x>>y>>n;
	long long int ax=abs(a-x);
	long long int by=abs(b-y);
	if(a==x && y==b){
		cout<<a*b<<"\n";
		goto here;
	}
	if(a==b){
		if(x<y)
		flag=1;
		else 
		flag=0;
		goto next;
	}
	if(ax<=n)
		s1=a-ax;
	else
		s1=a-n;
	if(by<=n)	
		s2=b-by;
	else
		s2=b-n;
//	cout<<s1<<" "<<s2<<endl;
	next:
	if(	(s1<s2)  || flag==1){
		if(ax>=n && n){
			a=a-n;
			n=0;
		}
		if(ax<n && n){
			a=a-ax;
			n=n-ax;
		}
		if(by>=n && n){
			b=b-n;
			n=0;
		}
		if(by<n && n){
			b=b-by;
			n=n-by;
		}
	}
	
	if(	(s1>s2)  || flag==0){
		if(by>=n && n){
			b=b-n;
			n=0;
		}
		if(by<n && n){
			b=b-by;
			n=n-by;
		}
		if(ax>=n && n){
			a=a-n;
			n=0;
		}
		if(ax<n && n){
			a=a-ax;
			n=n-ax;
		}
	}
	
	
//	cout<<a<<" "<<b<<endl;
	cout<<a*b<<"\n";		
	here :
	;	
	}	
	return 0;
}
