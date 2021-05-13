#include<iostream>
using namespace std;

int count_valley(char a[],int n)
{
	int valley=0;
	 	int count1=0,count2=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]=='D')
    {
    	count1++;
    	count2--;
   
    }
    if(a[i]=='U')
    {
    	count2++;
    	count1--;
    	 	
    	if(count1==0 && count2==0)
    	{
    	
    		valley++;
    	}
    }
  }
return valley;
}

int main()
{
   int n,ans;
   cin>>n;
   char a[n];
   cin>>a;
   ans=count_valley(a,n);
   cout<<ans;
   return 0;
}
