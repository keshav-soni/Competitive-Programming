#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n,cnt=0,prev=-1,next=-1;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
      if(a[i]==0 && a[i+1]==0 && a[i+2]==0 && i<n-2)
      {
      	if(i==0)
      	cnt++;
      	else
      	cnt=cnt+2;
      	i=i+2;
	  }
	  else if(a[i]==0 && i!=0)
	  cnt++;
	}
	cout<<cnt;	
	return 0;
}
