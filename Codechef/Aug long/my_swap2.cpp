#include<bits/stdc++.h>
using namespace std;
#define ll long int

int main()
{
    ll test;
    cin>>test;
    for(int i=0;i<test;i++)
    {
        
        ll num;
        cin>>num;
        ll add=0;
        add = (num*(num+1))/2;
        
        if(num==1 || num==0 || num==2)
        {
            cout<<"0";
            goto a;
        }
        
        if(add%2== 0)
        {
            ll ques = sqrt(add*4 + 1);
            ques = (ques-1);
            ques = ques/2;
            ll ques2 = (ques*(ques+1))/2;
            //ll tmp = num/2-1*(add);
            if(add/2 == ques2)
            {
                ll tmp = ((ques*(ques-1))/2) + ((num-ques)*(num-ques-1))/2 + (num-ques);
                cout<<tmp;
                goto a;
            }
            
            cout<<num-ques;
            goto a;
        }
        else
        {
         cout<<"0";
         goto a;
        }
        
        a:
        cout<<"\n";
    }
}
