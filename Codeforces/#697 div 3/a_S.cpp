#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,max=0,num=0,r;
		cin>>n;
		r=n%2;
		if(n==1||n==2)
			cout<<"NO"<<"\n";
		else if(r!=0)
		{
			cout<<"YES"<<"\n";
		}
		else
		{	//cout<<"inl";
			int m=sqrt(n);
			for(int i=2;i<=m;i++)
			{//	cout<<"\n i "<<i;
				num=n/i;
				if(i%2!=0)
				{//cout<<"\t nit ";
					if(n%i==0)
					{	//cout<<"\t num "<<num;
						if(max<i)
						{	max=i;
							//cout<<"\t max "<<max;
						}
					}
				}
				else if(num%2!=0)
				{
					//cout<<"\t num "<<num;
					if(n%i==0)
					{
						if(max<num)
						{	max=num;
							//cout<<"\t max "<<max;
						}
					}
					
				}
			}
			if(max>0)
				cout<<"YES"<<"\n";
			else
				cout<<"NO"<<"\n";
		}
	}
}
