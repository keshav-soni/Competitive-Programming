#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cin>>n1;
	int a[n1],c[n1];
	for(int i=0;i<n1;i++)
	  cin>>a[i];
	cin>>n2;
	 int b[n2];
	for(int i=0;i<n2;i++)
	  cin>>b[i];   
	c[0]=1;
	for(int i=1;i<n1;i++)
	{
		if(a[i]!=a[i-1])
	        c[i]=c[i-1]+1;
	 if(a[i]==a[i-1])
	     	c[i]=c[i-1];
	}  
	for(int i=0;i<n1;i++)
	cout<<c[i];
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			if(b[i]<=a[j] && a[j]>=b[i+1])
			{
				cout<<c[i+1];
			}
		}
	}
	return 0;
}
