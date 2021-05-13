#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int t,q,i;
	cin>>t;
	for(q=0;q<t;q++)
	{
		//cout<<"\n"<<t<<endl;
		long long int n,ei=0,o=0,j=0,k=0,re=0,ro=0,be=0,bo=0;
		cin>>n;
		string a;
		if(n==1)
		{
			int l;
			cin>>l;
			if(l%2==0)
				cout<<"2"<<"\n";
			else
				cout<<"1"<<"\n";
		}
		else
		{
			cin>>a;
			for(i=1;i<=n;i++)
			{	
				if(i%2==0)
					ei++;
				else
					o++;
			}
			long long int eve[ei],od[o];
			for(i=1;i<=n;i++)
			{	
				if(i%2==0)
				{
					eve[j]=a[i-1];
					j++;
					if(eve[j]%2==0)
						be++;
					else
						bo++;
				}
				else
				{
					od[k]=a[i-1];
					k++;
					if(od[j]%2==0)
						re++;
					else
						ro++;
				}
			}
			//cout<<"\nro"<<ro<<"\n re "<<re;
			//cout<<"\nro"<<bo<<"\n re "<<be;
			if(n%2==0)
			{
				if(be==0)
					cout<<"1"<<"\n";
				else
					cout<<"2"<<"\n";
			}
			else
			{
				if(ro==0)
					cout<<"2"<<"\n";
				else
					cout<<"1"<<"\n";
			}
		}
	}
}
