// C++ implementation of the approach 
#include <iostream> 
using namespace std; 

int countFactors(int n, int p) 
{ 
	int pwr = 0; 
	while (n > 0 && n % p == 0) { 
		n /= p; 
		pwr++; 
	} 
	return pwr; 
} 


// Driver code 
int main() 
{ 
		int n,count=0,odd=0;
		cin>>n;
		long int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
//		for(int i=0;i<n;i++)
//         	a[i]= countFactors(a[i], 2);
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
         	cout<<"on";
		 }
         odd=odd*(odd+1);
         odd=odd/2;
         count+=odd;
     	}
     	}
//        for(int i=0;i<n;i++)
//		cout<<a[i];
		 	 
		cout<<count; 	 
         	

	return 0; 
} 

