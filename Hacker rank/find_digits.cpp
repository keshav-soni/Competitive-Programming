#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int no,count=0,x;
        string s;
        cin>>s;
        no = stoi(s);
        int j=0;
        while(s[j]!='\0')
        {
            x=s[j]-48;
            if(x==0)
            goto next;
            if(no%x==0)
            count++;
            next:
            j++;
        }
        cout<<count<<endl;
    }
    return 0;
}
