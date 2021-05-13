#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n ,x=1;
	long int p=0,q=0;
	cin>>n;
	string s;
	cout<<n<<endl;
	cin>>s;
	long int middle=floor((x+n) / 2);
        while(s!="E")
        {
            cout<<middle<<"\n";
            cin>>s;
            if(s=="E")
                break;
            if(s=="L")
            {
				p++;
				q=0;
			}
            else
            {
           		q++;
           		p=0;	
			}
            if(s=="L" && p==2)
                {
                    n=middle;
                    middle=floor((x+middle) /2);
                    p=0;
                }
            else if(s=="G" && q==2)
                {
                     x=middle;
                     middle=floor((middle+n) /2);
                     q=0;
                }
            else if(p==2 && q==2)
            	middle--;
            else
				middle++;	
    	}
return 0;
}
