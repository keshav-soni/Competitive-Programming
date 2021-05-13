#include<iostream>
using namespace std;

int main()
{
	int n1,n2;
	cin>>n1;
	long a[n1+2];
	int c[n1+2];
	for(int i=1;i<=n1;i++)
	  cin>>a[i];
	a[0]=1000000000;
	a[n1+1]=0;  
	cin>>n2;
	 long b[n2];
	for(int i=0;i<n2;i++)
	  cin>>b[i];
	c[0]=0;     
	c[1]=1;
	for(int i=2;i<=n1;i++)
	{
	  if(a[i]!=a[i-1])
	        c[i]=c[i-1]+1;
	  if(a[i]==a[i-1])
	     	c[i]=c[i-1];
	}  
	c[n1+1]=c[n1]+1;
    for(int i=0;i<n2;i++)
    {
      for(int j=0;j<n1+2;j++)
      {
      	if(b[i]>=a[j])
      	{
     		cout<<c[j]<<endl;
      		break;
	    }
	  }
	}
	return 0;
}

