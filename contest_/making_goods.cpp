#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m;
	cin>>n>>m;
	float a[n],b[n],x,y,min1=1000000000000000000,min2=1000000000000000000,index1,index2;
	for(int i=0;i<n;i++)
	{
		cin>>x>>y;
		a[i]=sqrt(abs(x*x+y*y));
	}	
	for(int i=0;i<n;i++)
	b[i]=a[i];	
	sort(b,b+n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		if(b[i]==a[j])
		cout<<j+1<<"\n";
	}
	for(int i=0;i<n;i++)
	cout<<b[i];	
	return 0;
}
