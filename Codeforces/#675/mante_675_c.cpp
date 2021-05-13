#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    string s;
    cin>>s;
    ll n = s.length();
    ll ans = pow(2,n)-2;
    ll arr[ans];
    memset(arr,0,sizeof(arr));
    for(ll i=0;i<n;i++)
    {
        arr[i] = s[i] - '0';
    }
    ll j=0;
    for(ll i=n;i<ans-1;i++)
    {
        ll ans1 = (s[j]-'0')%1000000007;
        ll x = ( s[j+1]-'0' )%1000000007;
        ans1 = ((ans1*10)%1000000007)+x;
        arr[i] = (ans1)%1000000007;
        j++;
    }
    string s1="";
    for(ll i=0;i<s.length();i++)
    {
        if(s[i]!='0')
        {
            s1  = ( s1+s[i] );
        }
    }
    
    ll w= s1[0] - '0';
    for(ll i=1;i<s1.length();i++)
    {
        int x = s1[i] - '0';
        w = ((w*10)%1000000007) + x;
    }
    
    arr[ans-1] = w%1000000007;
    ll sum=0;
    for(ll i=0;i<ans;i++)
    {
        sum = (sum+arr[i])%1000000007;
    }
    // for(ll i=0;i<ans;i++)
    // {
    //   cout<<arr[i]<<endl;
    // }
    cout<<sum%1000000007<<endl;
}
