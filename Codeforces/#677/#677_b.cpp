#include<bits/stdc++.h>
using namespace std;
int main()
{
    int start;
    cin>>start;
    while(start--)
    {
        int n;
        cin>>n;
        int a[n];        
        for(int i=0;i<n;i++)
            cin>>a[i];
        int temp=0,t1=0,t2= 0;
        for(int i=0;i<n;i++)
            if(a[i]==1)
            {
                t1=i;
                break;
            }
            
        for(int i=n-1;i>=0;i--)
            if(a[i]==1)
            {
                t2=i;
                break;
            }
        
        
        for(int i=t1;i<=t2;i++)
            if(a[i]==0)
                temp++;
            
        cout<<temp<<endl;
    }
    return 0;
}
