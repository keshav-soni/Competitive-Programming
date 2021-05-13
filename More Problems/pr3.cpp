#include <bits/stdc++.h>
using namespace std;

int main()
{
	long a[5],sum[5],cnt=0;
	for(int i=0;i<5;i++)
	{
	cin>>a[i];
	sum[i]=0;
    }
	long max=0;
	long min,sim=a[0];
	for(int i=0;i<5;i++)
		if(sim==a[i])
		cnt++;
	if(cnt==5)
	{
		min=max=4*a[0];
	}	
	else
	{
	
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		 if(a[i]!=a[j])
		   sum[i]+=a[j];
	}
	for(int i=0;i<5;i++)
	{
      if(max<sum[i])
	  max=sum[i];
     }
	min=max;
	for(int i=0;i<5;i++)
	{
	   if(min>sum[i])
	    min=sum[i];
    }
}
    cout<<min<<" "<<max;
    return 0;
}

