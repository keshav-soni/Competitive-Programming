#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int n, k, p, cnt=0;
		cin>>n>>k;
		for(int i=0;i<n;i++)
		{
			cin>>p;
			if(p>k)
			cnt+=(p-k);			
		}
		cout<<cnt<<"\n";
	}	
	return 0;
}
