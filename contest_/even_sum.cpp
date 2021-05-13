#include <bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n, int k) 
{ 
    int flag=0;
    int max_sum = 0; 
    for (int i = 0; i < k; i++) 
			max_sum += arr[i]; 

			if(max_sum%2==0)
			flag++;  
    int window_sum = max_sum; 
    for (int i = k; i < n; i++) { 
        window_sum += arr[i] - arr[i - k]; 
		if(window_sum%2==0)
		 flag++;
    } 
    if(flag>0)
    return k;
	else
	return -1; 
} 
int main() 
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		int n,max=0,cnt=0,flag=0;
		cin>>n;
		int a[n],b[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];	
			b[i]=0;
		}
		b[n]=0;
		for(int j=1;j<=n;j++)
			b[j]=maxSum(a,n,j);
		for(int i=0;i<=n;i++)
		{
			if(b[i]>max)
		 		max=b[i];
		}
//				for(int i=0;i<n;i++)
//				cout<<b[i]<<" ";
		cout<<max<<"\n";
    }
	return 0;
}
