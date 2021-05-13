#include<bits/stdc++.h>
using namespace std;
int main()
{long long int n,t,i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
     sort(a,a+n);
		k = max(a[0]*a[1]*a[2]*a[3]*a[n-1],a[n-1]*a[n-2]*a[n-3]*a[n-4]*a[n-5]);
		j = max(k,a[0]*a[1]*a[n-1]*a[n-2]*a[n-3]);
		cout<<j<<endl;
	}
 
 
}
