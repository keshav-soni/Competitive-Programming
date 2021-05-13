#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long int n,q,count=0,floor,dest,temp;
		cin>>n>>q;
		for(int i=0;i<q;i++)
		{
	       cin>>floor>>dest;
	       if(i==0)
	       {
	       count+=floor;
		   count+=abs(floor-dest);
		   }
		   else
		   {
		   count+=abs(floor-dest);
		   count+=abs(temp-floor);    
	       }
	       temp=dest; 	
	    }		
 	   cout<<count<<"\n";	
	}
     return 0;
}
