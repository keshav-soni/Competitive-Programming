#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int l=0;l<t;l++)
	{
		string s;
		cin>>s;
        int len=s.length(),cnt=0;
    for(int i=0;i<len;i++)
	{
		if(s[i]=='x')
		{
			if(s[i+1]=='y')
			{
			cnt++;
			i++;
			}
		}
		
		else if(s[i]=='y')
		{
			if(s[i+1]=='x')
			{
			cnt++;
			i++;
			}
		}
		}    
		cout<<cnt<<"\n";
	}
	return 0;
}
