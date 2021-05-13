#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1,v1,x2,v2;
	cin>>x1>>v1>>x2>>v2;
	if(v1>v2 && x2>x1)
   { 
    if(x1==0 )
        {
            if(x2/v1 > 1/v2)
              cout<<"YES";
              else
              cout<<"NO";
        }
    else if(x1>0)
    {
           if((x2-x1)/v1 > 1/v2)
              cout<<"YES";
           else
              cout<<"NO";
    } 
   }
else if(v1<v2 && x2<x1)
{
    if(x2==0)
    {
       if(1/v1 < x1/v2)
         cout<<"YES";
       else
        cout<<"NO";   
    }
    else if(x2>0)
    {
       if(1/v1 < (x1-x2)/v2)
        cout<<"YES";
        else
        cout<<"NO"; 
    } 
}

else if(x1==x2 && v1==v2)
cout<<"YES";


else
cout<<"NO";

	return 0;
}


