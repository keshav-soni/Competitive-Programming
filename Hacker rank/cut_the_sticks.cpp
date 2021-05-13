#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,min=10000;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	while(min>0)
	{
	int cnt=0;
	min=10000;
	for(int i=0;i<n;i++)
	if(a[i]<min && a[i]!=0)
		min=a[i];
	for(int i=0;i<n;i++)
	{
		if(a[i]>=min)
		{
		a[i]=a[i]-min;
		cnt++;
		}
	}
	if(cnt>0)
	cout<<cnt<<endl;
	else 
	break;
	}
	return 0;
}
