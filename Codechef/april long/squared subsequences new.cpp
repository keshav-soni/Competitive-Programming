#include<bits/stdc++.h>
using namespace std;

int countFactors(long int n, int p) 
{ 
	int pwr = 0; 
	while (n > 0 && n % p == 0) { 
		n /= p; 
		pwr++; 
	} 
	return pwr; 
}

long int product(long int arr[],int n,int k)
{ 
    int cnt=0;
	long int sum;
    long int max_sum = 0; 
    for (int i = 0; i < k; i++) 
        max_sum += arr[i];
    if(max_sum>=2)
    cnt++;
	    
   for (int i = k; i < n; i++) 
	{ 
        max_sum += arr[i] - arr[i - k]; 
     	if(max_sum>=2)
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
		int n,count=0,odd=0;
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			odd=0;
	    if(a[i]%2!=0)
	    {
	    	odd++;
	    	i++;
         while(a[i]%2!=0)
         {
         	odd++;
         	i++;
		 }
   		 count+=(odd*(odd+1))/2;
     	}
     	}
	   
		for(int i=0;i<n;i++)
         	a[i]= countFactors(a[i], 2);

		
		for(int j=1;j<=n;j++)
			count+=product(a,n,j);
			
		cout<<count<<"\n";
	}
	return 0;
}
