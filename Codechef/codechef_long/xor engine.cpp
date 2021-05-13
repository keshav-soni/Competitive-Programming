#include <iostream>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
  	int n,m;
    cin>>n>>m;
	long int a[n],b[m],temp,even=0,odd=0,t;
	for(int i=0;i<n;i++)
		cin>>a[i];

   for(int i=0;i<m;i++)
	{
		cin>>temp;
		for(int j=0;j<n;j++)
		{
	    	if(temp%2==0)
	    	{
	   			if(a[j]%2==0)
				even++;
				else
				odd++;	 		
			}
			else
			{
				if(a[j]%2==0)
				odd++;
				else
				even++;
			}
  	  }
  	  cout<<even<<" "<<odd<<"\n";
  	  even=0;
  	  odd=0;
 	}
  }
  return 0;
}
