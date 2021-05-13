#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		long int a[n],sum=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,greater<long int>());
				
		for(int i=0;i<n;i++)
		{   
		    if(a[i]!=0 && (a[i]-i)>0)
			sum=sum+a[i]-i;
		}
      sum=sum%1000000007;    
	  cout<<sum<<endl;   
	}
	return 0;
}
