#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define MOD 1e9+7

int main()
{
    int test;
    cin>>test;
    
    for(ll i=0;i<test;i++)
    {
        
        ll num,ans,inx,inx2,sum,anw;
        cin>>num;
        if(num==0 || num==1 || num==2)
        {
            cout<<0;
            goto next;
        }
        sum=(num*(num+1))/2;
        if(sum%2!=0)
        {
            cout<<0;
            goto next;
        }
        else
        {
            
            inx = (1 + (sum*4));
            inx = sqrtl(inx);
            inx = (inx-1)/2;
            inx2 = (inx*(inx+1)) / 2;
            anw = num-ans;
            if(sum/2==inx2)
            {
                ll op = ((inx*(inx--))/2) + ((num-inx)*(num-inx-1))/2 + (num-inx);
                cout<<op;
                goto next;
                
            }
            

        }
                    cout<<anw;
            
            
            next :
            cout<<"\n";
            continue;
    }
}
