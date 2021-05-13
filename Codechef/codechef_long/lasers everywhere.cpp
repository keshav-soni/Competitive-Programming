#include <iostream>
#include<math.h>
using namespace std;
#define PI 3.14159

int main() 
{
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
  	long int n,m;
  	cin>>n>>m;
  	long int a[2][n];
  	for(int i=0;i<n;i++)
  	{
  		a[0][i]=i+1;
  		cin>>a[1][i];
    }
  	for(int i=0;i<m;i++)
	{
	  long int x1,x2,y,cnt=0;
	  cin>>x1>>x2>>y;
	  	for(int j=0;j<n-1;j++)
	  	{
	  		long int slope,req1,req2;
//	  		cout<<a[1][j]<<endl;
//			  cout<<y<<endl;
//			  cout<<a[1][j+1]<<endl;
	  	
	  	  if(a[1][j]<=y && y<=a[1][j+1])
			{
			//	cout<<"in";
//					if(x1==a[0][j+1] && y==a[1][j+1])
//					break;
//					if(x2==a[0][j] && y==a[1][j])
//					break;
					if(a[0][j+1] != a[0][j])
					slope=(atan((a[1][j+1]-a[1][j])/(a[0][j+1]-a[0][j]))*180)/PI;
					else 
					slope=90;
					if(x2 != a[0][j])
					req1=(atan((y-a[1][j])/(x2-a[0][j]))*180)/PI;
					else
					req1=90;
					if(x1 != a[0][j])
					req2=(atan((y-a[1][j])/(x1 -a[0][j]))*180)/PI;			
				    else 
					req2=90;
					
					if(slope<0)
					slope=180-slope;
					if(req1<0)
					req1=180-req1;
					if(req2<0)
					req2=180-req2;
					
			//	cout<<"\n"<<req1<<" "<<slope<<" "<<req2<<endl;
					if(req2>=slope && slope>=req1)
					{
							cnt++;
					//		cout<<"edw";
					}
			}
			else if(a[1][j]>=y && y>=a[1][j+1])
			{
				//    cout<<"out";
//				    if(x1==a[0][j+1] && y==a[1][j+1])
//					break;
//					if(x2==a[0][j] && y==a[1][j])
//					break;
				    if(a[0][j+1]!=a[0][j])
					slope=(atan(a[1][j+1]-a[1][j])/(a[0][j+1]-a[0][j])*180)/PI;
					else 
					slope=90;
					if(x2!=a[0][j])
					req1=(atan(y-a[1][j])/(x2-a[0][j])*180)/PI;
					else
					req1=90;
					if(x1 !=a[0][j])
					req2=(atan((y-a[1][j])/(x1 -a[0][j]))*180)/PI;
					else
					req2=90;
					
					if(slope<0)
					slope=-slope;
					else if(slope>0)
					slope=180-slope;
					if(req1<0)
					req1=-req1;
					else if(req1>0)
					req1=180-req1;
					if(req2<0)
					req2=-req2;
					else if(req2>0)
					req2=180-req2;
				//	cout<<"\n"<<req1<<" "<<slope<<" "<<req2<<endl;
					if(req2>=slope && slope>=req1)
					cnt++;
     		}	
		}
		cout<<cnt<<endl;
    }	
}
	return 0;
}
