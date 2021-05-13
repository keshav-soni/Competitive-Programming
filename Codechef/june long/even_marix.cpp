#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		int a[n*n];
		for(int i=0;i<n*n;i++)
		a[i]=i+1;
		if(n%2!=0)
		{
			for(int i=0;i<n*n;i++)
			{
				cout<<a[i]<<" ";
				if((i+1)%n==0)
				cout<<"\n";
			}
		}
		else
		{
			int i=0;
			for(int s=0;s<n/2;s++)
			{
				for(;i<n*n;i++)
				{
				cout<<a[i]<<" ";
				if((i+1)%n==0)
				break;
				}
				cout<<"\n";
				i+=n+1;
				for(int j=i-1;j>=i-n;j--)
				cout<<a[j]<<" ";
				cout<<"\n";
			}
		}
	}
	return 0;
}
