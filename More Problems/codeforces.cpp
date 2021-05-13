#include <iostream>
#include<cstring>
using namespace std;

int main()
{
	int sum=0;
	int n;
	cin>>n;
	int no=n;
	int a;
	
	if(n%4==0 || n%7==0)
	{
			cout<<"YES";
			return 0;
		
	}
	  while(no<=0)
	  {
	  	a=no%10;
	  	if(a==4 || a==7)
	  	{
	  		sum=sum++;
		  }
		  else 
		  	sum=sum-9999;
	  	no=no/10;
	  }

	  
	if(sum>0)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
