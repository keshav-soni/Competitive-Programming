#include<bits/stdc++.h>
using namespace std;

int countFactors(long int n, long int p) 
{ 
	int pwr = 0;
	if(n==0)
	return 2; 
	while (n > 0 && n % p == 0)
    { 
		n /= p; 
		pwr++; 
	} 
	
	return pwr; 
}

long int product(long int arr[],long int n,long int k)
{ 
    long int cnt=0;
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
		long int n,count=0,odd=0,temp=0;
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
		   		odd=odd*(odd+1);
		   		odd=odd/2;
		   		count+=odd;
	     	}
     	}
		cout<<count<<"\n";	     
		for(int i=0;i<n;i++)
         	a[i]= countFactors(a[i] , 2);

				for(int i=0;i<n;i++)
				cout<<a[i]<<" "<<endl;
		
		for(int j=1;j<=n;j++)
		{
			temp=product(a,n,j);
			count+=temp;
		}
		;
		cout<<count<<"\n";
	}
	return 0;
}
