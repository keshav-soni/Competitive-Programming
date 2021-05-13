#include<bits/stdc++.h>
using namespace std;

class big
{
 	string s;	
 	int x,len,flag=0;
 public:
   void input();
   void output();
   
};

void big::input()
{	char n;
    int cnt=0,len1=0;
	cin>>s;
	int i=0;
	while(s[i]!='\0')
	{
		cnt++;
		i++;
	}
	len=cnt-1;
	for(int j=0;j<len;j++)
	{
	len1=len-j;
	for(int i=len1-1;i>=0;i--)
	{
		if(s[len1]>s[i])
		 {
			 n=s[i];
			 x=i;
	        swap(s[len1],s[i]);
		     flag++;
			 return;
	    }
	}
    }

}

void big::output()
{
		if(flag==0)
	{
	cout<<"no answer"<<endl;
	return ;
   }
	else
	{
	for(int i=x+1;i<=len;i++)		
	for(int j=x+1;j<=len;j++)
	{
	  if(s[i]<s[j])
		swap(s[i],s[j]);
	}
	cout<<s<<endl;
    }
}

int  main()
{
	int t;
	cin>>t;
    big b[t];
    for(int i=0;i<t;i++)
      b[i].input();
   for(int i=0;i<t;i++)
    	b[i].output(); 
 	return 0;
}
