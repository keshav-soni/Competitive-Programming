#include<bits/stdc++.h>
using namespace std;

int cnt=0;

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;
} 

int main(){
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
     	int n,m;
     	cnt=0;
		cin>>n>>m;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		int i, j, min_idx;  
  		for (i = 0; i < n-1; i++)  
    	{  
	        min_idx = i;  
	        for (j = i+1; j < n; j++) 
			{ 
	        if (a[j] < a[min_idx])  
	            min_idx = j;
		    }
	
	        swap(&a[min_idx], &a[i]);
        }      		
		cout<<cnt<<"\n";
	}
	return 0;
}
