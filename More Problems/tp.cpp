#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int h,w,area,sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0;
	cin>>h>>w;
	int a[h][w];
	for(int i=0;i<h;i++)
	 for(int j=0;j<w;j++)
	   cin>>a[i][j];
    for(int i=0;i<h;i++)
    {
    	sum2=sum2+a[i][w-1];
	 	sum3=sum3+a[i][0];	
    }
	 for(int j=0;j<w;j++)
	 {
	 	sum1=sum1+a[h-1][j];
	 	sum4=sum4+a[0][j];
	 } 
	for(int i=0;i<h;i++)
	 for(int j=0,k=1;j<w-1,k<w;j++,k++)  
	  	 	sum5=sum5+abs(a[i][j]-a[i][k]);
    for(int i=0;i<w;i++)
	  for(int j=0,k=1;j<h-1,k<h;j++,k++)
    	sum6=sum6+abs(a[j][i]-a[k][i]);
    cout<<sum1<<"\n";
    cout<<sum2<<"\n";
    cout<<sum3<<"\n";
    cout<<sum4<<"\n";
    cout<<sum5<<"\n";
    cout<<sum6<<"\n";
	area=2*h*w+sum1+sum2+sum3+sum4+sum5+sum6;
	cout<<area;
	return 0;
}
