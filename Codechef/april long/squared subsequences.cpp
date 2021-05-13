#include<bits/stdc++.h>
using namespace std;

long int product(long int arr[],long int n,int k)
{ 
    long int cnt=0,arr_pro=1; 
    for (int i = 0; i < k; i++)
	{
		   if(i==0)
		   arr_pro = arr[i];
		   else 
           arr_pro *= arr[i]; 
    } 
    if(arr_pro%4==0)
    cnt++;
    else if(arr_pro%2!=0)
    cnt++;
 
    for (int i = k; i < n; i++) { 
    arr_pro = (arr_pro*arr[i])/arr[i-k];
    if(arr_pro%4==0)
    cnt++;
    else if(arr_pro%2!=0)
    cnt++;         
    } 
  
    return cnt; 
}

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long int n,count=0;
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int j=1;j<=n;j++)
		{
			count+=product(a,n,j);
		}
		cout<<count<<"\n";
	}
	return 0;
}
