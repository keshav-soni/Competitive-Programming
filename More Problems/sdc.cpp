#include<bits/stdc++.h>
using namespace std;

long int product(long int arr[],int n,int k)
{ 
    int cnt=0;
	long int arr_pro; 
    for (int i = 0; i < k; i++)
	{
		   if(i==0)
		   arr_pro = arr[i];
		   else 
           arr_pro *= arr[i]; 
    } 
    if(arr_pro%4==0)
    {
 //   cout<<arr_pro<<endl;	
    cnt++;
	}
    else if(arr_pro%2!=0)
    {
//	  cout<<arr_pro<<endl;		
	cnt++;
	}
    
    for (int i = k; i < n; i++) 
	{ 
	if(arr[i-k]!=0)
    arr_pro = (arr_pro*arr[i])/arr[i-k];
    else
    {
    	
    arr_pro=arr[i-k+1];
    for(int z=1;z<k;z++)
    arr_pro*=arr[i-k+1+z];
//    cout<<"fdvdf"<<arr_pro<<endl;
    }
    if(arr_pro%4==0)
    {
//    cout<<arr_pro<<endl;	
    cnt++;
	}
	    else if(arr_pro%2!=0)
        {
//   cout<<arr_pro<<endl;	
    cnt++;
	}
	} 
     return cnt; 
}

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,count=0;
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			    if(a[i]==0)
			    {
//			    cout<<a[i]<<endl;	
			    count++;
				}
			    else if(a[i]%2!=0)
			    {
//			     cout<<a[i]<<endl;		
				count++;
				}
		}
		for(int j=2;j<=n;j++)
			count+=product(a,n,j);
		cout<<count<<"\n";
	}
	return 0;
}
