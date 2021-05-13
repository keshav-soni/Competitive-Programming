#include<iostream>
#include<set>
using namespace std;

int main()
{
	set <int> s,k;
	int n,m,a[10],b[10],c[10],count=0,cnt=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<m;i++)
		cin>>b[i];
	for(int j=0;j<=b[0];j++)
	{
		count=0;
	for(int i=0;i<n;i++)
	{
		if((a[n-1]+j)%a[i] == 0)
		{
			count ++;
			if(count==n)
		   s.insert(a[n-1]+j);
		}
	}	
	}
	set <int> :: iterator j; 
	for(j=s.begin();j!=s.end();j++)
	{
		cnt=0;
	for(int i=0;i<m;i++)
	{
		if( b[i]%*j== 0)
		{
			cnt++;
			if(cnt==m)
		   k.insert(*j);
		}
	}
	}
	count=0;
	for(j=k.begin();j!=k.end();j++)
	{
		count++;
	}
	cout<<count;
	
	return 0;
}
