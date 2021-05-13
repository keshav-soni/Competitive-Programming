#include <iostream>
using namespace std;

int main() 
{
  int n,k,sum=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
  {
  	int min,max;
  	min=a[i]-k;
  	max=a[i]+k;
  	for(int j=0;j<n;j++)
  	if(min<=a[j] && a[j]<=max)
  		sum=sum+a[j];
  		
  }
  cout<<sum;
}
