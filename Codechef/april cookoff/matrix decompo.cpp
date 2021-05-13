#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	  long long int n,a,sum=0,temp;
	  cin>>n>>a;
	  for(int i=1;i<=n;i++)
	  {
	    temp=pow(a,((2*i)-1));
	    sum+=temp;
	    a=a*temp;
	  }	
	  cout<<sum%1000000007<<"\n";	
		
	}
	return 0;
}
