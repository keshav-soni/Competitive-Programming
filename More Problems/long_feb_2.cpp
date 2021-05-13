#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
	    multimap <char ,int > m;
	    char x;
		int y;
	    int a[4][4];
	    for(int i=0;i<n;i++)
		{
			cin>>x>>y;
			m.insert(pair<char ,int >(x,y));
		}
   
		multimap<char, int>::iterator i; 
		for (i=m.begin();i!=m.end();++i) 
		{ 
		    if(i->first=='A')
		    {
		    	if(i->second==12)
		       	   a[0][0]++;
		       	else if(i->second==3)
		    	   a[0][1]++;
				else if(i->second==6)
		    	   a[0][2]++;
				else
		    	   a[0][3]++;         
		    }
		    else if(i->first=='B')
		    {
		    	if(i->second==12)
		    	   a[1][0]++;
		    	else if(i->second==3)
		    	   a[1][1]++;
				else if(i->second==6)
		    	   a[1][2]++;
				else
		    	   a[1][3]++;         
		    }
		    else if(i->first=='C')
		    {
		    	if(i->second==12)
		    	   a[2][0]++;
		    	else if(i->second==3)
		    	   a[2][1]++;
				else if(i->second==6)
		    	   a[2][2]++;
				else
		    	   a[2][3]++;         
		    }
		    else 
		    {
		    	if(i->second==12)
		    	   a[3][0]++;
		    	else if(i->second==3)
		    	   a[3][1]++;
				else if(i->second==6)
		    	   a[3][2]++;
				else
		    	   a[3][3]++;         
		    }								    
		}

	int max1=0,max2=0,max3=0,max4=0;
	int used_i1,used_j1,used_i2,used_j2,used_i3,used_j3,used_i4,used_j4;
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	{
        	if(a[i][j]>max1)
        	{
				max1=a[i][j];
				used_i1=i;
				used_j1=j;	
	        }
	}
	cout<<"\n"<<max1<<"\t"<<used_i1<<"\t"<<used_j1<<endl;
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	{
			if(a[i][j]>max2 && i!=used_i1 && j!=used_j1)
        	{
				max2=a[i][j];
				used_i2=i;
				used_j2=j;	
	        }
	}
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	{
			if(a[i][j]>max3 && i!=used_i1 && j!=used_j1 && i!=used_i2 && j!=used_j2)
        	{
				max3=a[i][j];
				used_i3=i;
				used_j3=j;	
	        }
	}
	for(int i=0;i<4;i++)
	for(int j=0;j<4;j++)
	{
			if(a[i][j]>max4 && i!=used_i1 && j!=used_j1 && i!=used_i2 && j!=used_j2 && i!=used_i3 && j!=used_j3)
        	{
				max4=a[i][j];
				used_i4=i;
				used_j4=j;	
	        }
	}	
    cout<<max1<<"\t"<<max2<<"\t"<<max3<<"\t"<<max4<<"\t";
	max1=max1*100;
	max2=max2*75;
	max3=max3*50;
	max4=max4*25;
	int sum=0;
    sum=max1+max2+max3+max4;
    cout<<max1<<"\t"<<max2<<"\t"<<max3<<"\t"<<max4<<"\t";
	cout<<"\n"<<sum<<endl;
    }
	return 0;
}
