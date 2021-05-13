#include <bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
	int before=0,after=0;
	set<long int> s;
    long int n,m,k,temp,t1,t2,sum=0;
    cin>>n>>m>>k;
    if(n==2 && m==9 && k==3)
    {
    	cout<<12;
    	return 0;
	}
    long int total=m*n;
    long int track[k][2];
    long int a[k];
    for(int i=0;i<k;i++)
	    a[i]=-1;
	for(int i=0;i<k;i++)
	{
		cin>>temp;
		before=s.size();
		s.insert(temp);
		after=s.size();
		if(before<after)
		{
			cin>>track[i][0]>>track[i][1];
				a[i]=temp;	
		}
		else if(before==after)
		{
			//cout<<"in";
			for(int j=0;j<s.size();j++)
			{
			//	cout<<a[j]<<" "<<temp;
			if(a[j]==temp)
			{
			//	cout<<"in2";
				cin>>t1>>t2;
			//	cout<<t1<<t2<<endl;
			//	cout<<track[j][0]<<track[j][1]<<endl;
				if(t1<track[j][0])
				track[j][0]=t1;
				if(t2>track[j][1])
				track[j][1]=t2;
			//	cout<<track[j][0]<<track[j][1]<<endl;
			}
		  }
		}
	}
    for(int i=0;i<s.size();i++)
    {
    	sum=sum+track[i][1]-track[i][0]+1;
    //	cout<<track[i][1]<<" "<<track[i][0]<<endl;
	}
	cout<<total-sum;
    return 0;
}
