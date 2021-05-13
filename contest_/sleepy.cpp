#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,d,flag=0;
		cin>>n>>d;
		int a[n];
		if(d==0)
		{
			flag++;
			goto next;
		}
		for(int i=0;i<=n;i++)
		a[i]=d;
		for(int i=0;i<=n;i++)
			cout<<a[i];
		next:
		if(flag>0)	
		cout<<0;	
		cout<<"\n";			
	}
	return 0;
}
