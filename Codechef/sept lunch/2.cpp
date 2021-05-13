#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    for(int w=0;w<test;w++)
    {
        int n,flag=1;
        cin>>n;
        int x[n],y[n];
        
        for(int i=0;i<n;i++){
            cin>>x[i];
            y[i] = i+1;
		}        
        for(int i=0;i<n;i++)
    	{
    		if(x[i] != (i+1))
    		{
    			if(__gcd(x[i],(i+1))==x[i])
    				x[i] = (i+1);
			}
		}
		for(int i=0;i<n;i++)
		{
			if(y[i]!=x[i])
			{
				flag=0;
				break;
			}
		}
		if(flag==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;		
    }
    return 0;
}
