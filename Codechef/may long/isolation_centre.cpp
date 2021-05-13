#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long int n,q;
		cin>>n>>q;
	    long int arr[26],wards,queue=0;
	    char input;
	    for(int i=0;i<26;i++)
			arr[i]=0;
		for(int i=0;i<n;i++)
		{
			cin>>input;		
			arr[int(input)-97]++;
		}
//		for(int i=0;i<26;i++)
//			cout<<arr[i];	
		for(int i=0;i<q;i++)
		{
			queue=0;
			cin>>wards;
			for(int j=0;j<26;j++)
			{
				if(arr[j]-wards>0)
				queue+=arr[j]-wards;
     		}
			cout<<queue<<"\n";
		}
	}
	return 0;
}
