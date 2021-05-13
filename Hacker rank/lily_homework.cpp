#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int n,cnt1=0,cnt2=0,ans,cnt;
	cin>>n;
	long long int a[n],b[n],c[n];
	for(long long int i=0;i<n;i++)
	{
	cin>>a[i];
	b[i]=a[i];
    }
    sort(b,b+n);
    for(long long int i=n-1;i>=0;i--)
    c[n-1-i]=b[i];
	for(long long int i=0;i<n;i++)
    {
	  if(a[i]!=b[i])
	  	cnt1++;
	  if(a[i]!=c[i])
	  	cnt2++;
	}	
	cnt1<cnt2?cnt=cnt1:cnt=cnt2;
	if(cnt%2==0)
	ans=cnt/2;
	else
	ans=cnt/2+1;
	cout<<ans;
	return 0;
}
