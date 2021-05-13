#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long int n,cnt=1,y;
		cin>>n;
		y=n;
        if(n<4)
    {
       	cout<<1<<"\n";
       	cout<<n<<" ";
       	for(long int i=1;i<=n;i++)
       	{
		 cout<<i;
		 if(i!=n) 
		 cout<<" ";
	    }
       	cout<<"\n";
       	goto next;
	   }
        else
        {
        n=n/2;	
        cout<<n<<"\n";
       }

	 	for(long int i=1;i<=n;i++)	
		{
		   if(cnt==y-2 && y%2!=0)
			{
			cout<<3<<" ";
			
			cout<<cnt<<" "<<cnt+1<<" "<<cnt+2<<"\n";
			goto next;
			
		    }
		    cout<<2<<" ";	
			cout<<cnt<<" "<<cnt+1<<"\n";
			cnt=cnt+2;
		}
		next:
		;	
   }
	return 0;
}
