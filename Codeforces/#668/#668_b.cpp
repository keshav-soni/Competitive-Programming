#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
long long n,i,s=0;
cin>>n;
long long a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
    s+=a[i];
    
    if(s<0)
    {
        s=0;
    }
}
cout<<s<<endl;
}
}
