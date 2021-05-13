#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int temp;
	cin>>temp;
	while(temp--)
	{
		long long int n,k,x,y=0,sum=0;
		cin>>n>>k;
		x= ceil(n/2);
		vector<int>a(n*k);		
		for(int i=0;i<n*k;i++)
			cin>>a[i];			
		for(int i=n*k-1;i>=0;i--)
		{
			if(y == x)
			{
				sum=sum+a[i];
				y=0;
				k--;
			}
			else
				y++;
			if(k==0)
				break;
		}		
		cout<<sum<<"\n";
	}
	return 0;
}
