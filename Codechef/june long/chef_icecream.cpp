#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n,stack=0,received,flag=0,cnt1=0,cnt2=0;
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cin>>received;
			if(stack<received-5)
			    flag++;
			else
				stack-=received-5;    
			if(received==5)
				cnt1++;
			else if(received==10)
			{
				cnt2++;
				if(cnt1>=1)
				cnt1--;
				else
				flag++;
			}
			else if(received==15)
			{
				if(cnt2>=1)
				cnt2--;
				else if(cnt1>=2)
				cnt1-=2;
				else
				flag++;
			}
			stack+=5;
		}		
		if(flag==0)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
	return 0;
}
