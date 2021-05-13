#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,flag=0;
		cin>>n;
		if(n%3==0)
		{
			for(int i=0;i<n;i++)
			cout<<5;
		}
		else
		{
			int no=0,a;
			a=n;
			for(int i=0;i<n;i++)
			{
				if(a%3==0 && no%5==0)
				{
					flag=1;
					for(int j=0;j<a;j++)
                        cout<<5;
					for(int j=0;j<no;j++)
						cout<<3;	  
						
					goto nxt;	
				}
					a--;
					no++;
				
			}
			if(flag==0 && n%5==0)
			{
        		for(int i=0;i<n;i++)
					cout<<3;
			}
			else
				cout<<-1;
		}
		nxt:
		cout<<"\n";		
	}
	return 0;
}

