#include <iostream>
#include<set>
using namespace std;

int main() 
{
  int t;
  cin>>t;
  for(int k=0;k<t;k++)
  {
  	int n,m,temp,before,after,min=10000;
  	set <int> s;
  	cin>>n>>m;
  	int t[2][n];
  	for(int i=0;i<2;i++)
  	 for(int j=0;j<n;j++)
  	 	cin>>t[i][j];
  	 	
  	int price[n];
  	for(int i=0;i<n;i++)
  		price[i]=-1;  	
  	for(int i=0;i<n;i++)
  	{
  		temp=t[0][i];
  		before=s.size();
  		s.insert(temp);
  		after=s.size();
  		if(before<after)
  			price[i]+=t[1][i]+1;	
		else if(before==after)
		{//cout<<"in2"<<" "<<s.size()<<endl;
			for(int j=0;j<i;j++)
			{ //cout<<"\n"<<t[0][j]<<" "<<temp<<endl;
				if(t[0][j]==temp)
				{
					price[j]+=t[1][i];
					break;
				}
		    }
		}
	}
	
//	for(int i=0;i<n;i++)
//	cout<<price[i]<<" ";
	
  	for(int i=0;i<n;i++)
  		if(min>price[i] && price[i]!=-1)
	 		 min=price[i];
			  	
  	cout<<min<<endl;
   }

	return 0;
}
