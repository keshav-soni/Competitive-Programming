#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a[3][3]={8,3,4,
				1,5,9,
				6,7,2};
	int b[3][3]={4,9,2,
				3,5,7,
				8,1,6};
	int c[3][3]={2,7,6,
				9,5,1,
				4,3,8};
	int d[3][3]={6,1,8,
				7,5,3,
				2,9,4};
	int e[3][3]={4,3,8,
				9,5,1,
				2,7,6};
	int f[3][3]={2,9,4,
				7,5,3,
				6,1,8};
	int g[3][3]={6,7,2,
				1,5,9,
				8,3,4};
	int h[3][3]={8,1,6,
				3,5,7,
				4,9,2};						
	int q[3][3];
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	cin>>q[i][j];
	
	int sum1=0,sum2=0,sum3=0,sum4=0,sum5=0,sum6=0,sum7=0,sum8=0;			
	for(int i=0;i<3;i++)
	for(int j=0;j<3;j++)
	{
	sum1=sum1+abs(q[i][j]-a[i][j]);
	sum2=sum2+abs(q[i][j]-b[i][j]);
	sum3=sum3+abs(q[i][j]-c[i][j]);
	sum4=sum4+abs(q[i][j]-d[i][j]);
	sum5=sum5+abs(q[i][j]-e[i][j]);
	sum6=sum6+abs(q[i][j]-f[i][j]);
	sum7=sum7+abs(q[i][j]-g[i][j]);
	sum8=sum8+abs(q[i][j]-h[i][j]);
	}
//	cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4<<" "<<sum5<<" "<<sum6<<" "<<sum7<<" "<<sum8<<" ";	
	int result=sum1;
	if(result>sum2)
	result=sum2;
	if(result>sum3)
	result=sum3;			
	if(result>sum4)
	result=sum4;			
	if(result>sum5)
	result=sum5;
	if(result>sum6)
	result=sum6;
	if(result>sum7)
	result=sum7;
	if(result>sum8)
	result=sum8;
	cout<<result;
	
	return 0;
}
