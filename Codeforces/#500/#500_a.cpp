#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,a=0,b=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>x;
		a+=x;	
	}	
	for(int i=0;i<n;i++)
	{
		cin>>x;
		b+=x;	
	}		
	if(a>=b)
		cout<<"Yes";
	else
		cout<<"No";	
	
	return 0;
}
