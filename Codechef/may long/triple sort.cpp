#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
    for(int z=0;z<t;z++)
	{
	   int n,k,input,prev,ite=0,index,flag1=0,flag2=0,flag3=0,v1,v2,v3,j=0,fl=0,f2=0;
	   int s1[3],s2[3],s3[3],s4[3];
	   cin>>n>>k;
	   int a[n];
	   for(int i=0;i<n;i++)
		   	cin>>a[i];
	    
	    fun:
	    for(int i=0;i<n;i++)
	    {
		if(a[i]!=i+1)
		{
	      s1[ite]=a[i];
		  ite++;
		  if(ite==3)
		    break;		
	    }
	    } 
		if(ite<3)
		{
		cout<<-1<<"\n";   	
		goto next;
		}
		   	
		s2[0]=s1[2];	
		s3[1]=s1[2];	
		s2[1]=s1[0];
		s3[2]=s1[0];
		s2[2]=s1[1];
		s3[0]=s1[1];
		for(int i=0;i<3;i++)
		s4[i]=s1[i];
		sort(s4,s4+3);

		for(int i=0;i<3;i++)
		{
			cout<<s1[i]<<" "<<s2[i]<<" "<<s3[i]<<" "<<s4[i]<<endl;
			
		}
		for(int i=0;i<3;i++)
		{
			if(s1[i]!=s4[i])
			flag1++;
			if(s2[i]!=s4[i])
			flag2++;
			if(s3[i]!=s4[i])
			flag3++;
		}

			if(flag1==0 ){
				cout<<0<<"\n";
//				for(int i=0;i<3;i++)
//				cout<<s1[i]<<" ";
				goto next;
			}
			if(flag2==0){
				if(k>=1)
				{
			    cout<<1<<"\n";
				for(int i=0;i<3;i++)
				cout<<s2[i]<<" ";
				goto next;
				}
				else
				cout<<-1<<"\n";
			}
			if(flag3==0){
				if(k>=2)
				{
				cout<<2<<"\n";
				for(int i=0;i<3;i++)
				cout<<s2[i]<<" ";
				cout<<"\n";	
				for(int i=0;i<3;i++)
				cout<<s3[i]<<" ";
				goto next;
				}
				else
				cout<<-1<<"\n";
			}				
		next:
			;
			
    }
	return 0;
}


