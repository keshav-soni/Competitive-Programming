#include <bits/stdc++.h>
using namespace std;

int main(){
	int t,c;
	cin>>t;
	for(int k=0;k<t;k++)
	{
	    int n;
		cin>>n;
		int a[n],cnt=0,count=0,cnt1=0;
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			if(a[i]==1)
			{
			   count++;
			  for(int j=i+1;j<i+6;j++)
			  {
			  	if(a[j]==1)
				 {
				 	cout<<"NO"<<" "<<endl;
				 	goto next;
				 }
				else
				{
				cnt++;
			    if(cnt==5)
				{
					cnt1++;
					cnt=0;
					}	
			    }
			  }
			}
     	}
//     	cout<<cnt1<<count;
     	if(cnt1==count)
		cout<<"YES"<<endl;
    	next:
    		;
    		
	}
	return 0;
}	
