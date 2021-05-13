#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n,k,index,stack=0,rem=0;
		cin>>n>>k;
		long long a[n],max=0;
		for(int i=0;i<n;i++)
			cin>>a[i];
	//	sort(a,a+n);
		for(int i=0;i<n;i++)
			{
				rem=a[i]%k;
				while(rem!=0)
				{
					if(stack<(k-rem))
					{
						a[i]--;
						stack++;
					}
					else
					{
						a[i]++;
						stack--;
					}
					rem=a[i]%k;
				}
     		}
	cout<<stack<<endl;	
	}
	return 0;
}
