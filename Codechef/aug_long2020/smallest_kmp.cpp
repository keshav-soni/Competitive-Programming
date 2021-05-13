#include <bits/stdc++.h> 
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int w=0;w<t;w++)
	{
		int store=0,flag1=0,j=0;
		string s,p,p1,sample1,sample2,check;
		cin>>s>>p;
		p1=p;
		sort(s.begin(),s.end());
		sort(p.begin(),p.end());
		//cout<<s<<endl;
		if(s==p1)
		{
			cout<<s;
			goto next;
		}
		//for deleting..
		for(int i=0;i<s.length();i++)
		{
			if(s[i]==p[j] )
			{
				s.erase(s.begin() + i);
				j++; 
				i--;
			}
		}
		if(s.length()==0)
		{
			cout<<p1;
			goto next;
		}
		j=0;
		sample1=p1+p1[0];
		sample2=p1[0]+p1;
		sample1>sample2?check=sample1:check=sample2;
				
		if(check==sample1)
		{
			for(int i=0;i<s.length();i++)
			{
				if(p1[j]<s[i])
				{
					store=i;
					flag1++;
					break;
				}
			}
		}
		else if(check==sample2)
		{
			for(int i=0;i<s.length();i++)
			{
				if(p1[j]<=s[i])
				{
					store=i;
					flag1++;
					break;
				}
			}
		}
		if(flag1==0)
		{
			cout<<s<<p1;
			goto next;
		}
		
		//to print at that position
		for(int i=0;i<s.length();i++)
		{
			if(i==store)
				cout<<p1;
			cout<<s[i];
		}
		next :
			cout<<"\n";
	}
	return 0;
}
