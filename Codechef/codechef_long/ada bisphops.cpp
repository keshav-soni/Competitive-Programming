#include <iostream>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
  	int x,y,temp;
    cin>>x>>y;
	if(x==1 && y==1)
	{ 
	cout<<"16"<<endl;
	}
	else if(x!=y)
	{
		temp=(x+y)/2;
		cout<<"18"<<endl;
		cout<<temp<<" "<<temp<<endl;
		cout<<"1 1"<<endl;
	}
	else if(x==y)
	{
		cout<<"17"<<endl;
		cout<<"1 1"<<endl;
    }
	cout<<"8 8"<<endl;
  	cout<<"7 7"<<endl;  	
  	cout<<"8 6"<<endl;
  	cout<<"6 8"<<endl;
  	cout<<"1 3"<<endl;
  	cout<<"3 1"<<endl;
  	cout<<"4 2"<<endl;
  	cout<<"5 1"<<endl;
  	cout<<"1 5"<<endl;
  	cout<<"4 8"<<endl;
  	cout<<"8 4"<<endl;
  	cout<<"7 3"<<endl;
  	cout<<"8 2"<<endl;
  	cout<<"2 8"<<endl;
  	cout<<"1 7"<<endl;
  	cout<<"7 1"<<endl;
  }
  return 0;
}
