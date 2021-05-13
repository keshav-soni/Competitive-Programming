#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;		
		if(n > 45)
			cout<<"-1"<<endl;
		else
		{
			int temp= 9;
			string sum = "";
			while(temp!=0 || n>0){
				if(n <= temp)
				{
					sum+=to_string(n);
					n = 0;
					break;
				}
				else
				{
					sum+=to_string(temp);
					n-=temp; 
					temp--;
				}
			}
			if(n>0)
				cout<<"-1";
			else
			{
				reverse(sum.begin(),sum.end());
				cout<<sum;
			}
		}
		cout<<"\n";
	}
	return 0;
}
