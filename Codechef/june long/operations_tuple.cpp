#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		float p,q,r,a,b,c,no1,no2,no3,min,cnt=0,flag=0;
		cin>> p>> q>> r>>a >>b >>c;
		no1=a-p;
		no2=b-q;
		no3=c-r;
		while(1)
		{
					
			min=1000000000;
			flag=0;	
			if(no1==0 && no2==0 && no3==0)
				break;
			if(a==p && b==q && c==r)	
			     break;
			if(no1==no2 && no2==no3)
			{
		       cnt++;
			   break;		
		    }  	
			if(a!=0 && b!=0 && c!=0 && p!=0 && q!=0 && r!=0)
			{
				if(a/p==b/q && b/q==c/r)
				{
				no1=0;
				no2=0;
				no3=0;
				a=p;
				b=q;
				c=r;
				flag++;
				}
			}
			else if(a!=0 && b!=0 && p!=0 && q!=0)
			{
				if(a/p==b/q)
				{
				no1=0;
				no2=0;
				a=p;
				b=q;
				flag++;
				}
			}
			else if(b!=0 && c!=0 && q!=0 && r!=0)
			{
				if(b/q==c/r)
				{
				no2=0;
				no3=0;
				b=q;
				c=r;
				flag++;
				}
			}
			else if(a!=0 && c!=0 && p!=0 && r!=0 )
			{
				if(a/p==c/r)
				{
				no1=0;
				no3=0;
				a=p;
				c=r;
				flag++;
				}
			}
			if(flag>0)
			goto next;
			if(min>no1 && no1!=0)
			min=no1;
			if(min>no2 && no2!=0)
			min=no2;
			if(min>no3 && no3!=0)
			min=no3;
			if(no1!=0)
				no1-=min;
			if(no2!=0)
				no2-=min;
			if(no3!=0)
				no3-=min;
			p=a-no1;
			q=b-no2;
			r=c-no3;
		next:
            cnt++;
			if(cnt>=3)
			break;	
			cout<<p<<" "<<q<<" "<<r<<" \n";	
			cout<<no1<<" "<<no2<<" "<<no3<<" \n";	    
		}
		cout<<cnt<<"\n";
	}
	return 0;
}
