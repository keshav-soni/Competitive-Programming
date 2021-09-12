#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool check(int str[],int fnd[],int b){
    string temp = "b";
    if(str[temp[0]]==b && fnd[temp[0]]==b)
        return 1;
    else
        return 0;
}

int main()
{
    int n,k,b;
    cin>>n>>k>>b;
    string s;
    cin>>s;
    int str[256] ={0}, fnd[256]={0};
    for(int i=0;i<k;i++)
    {
        str[s[i]]++;
        fnd[s[i]]++;
    }
    bool flag=0;
    int j = 0;
    for(int i=k;i<s.size();i++)
    {
        if(check(str,fnd,b))
        {
            flag=1;
            break;
        }        
        str[s[i]]++;
        str[s[j]]--;
        j++;
    }    
    if(flag){
        for(int i=0;i<256;i++){
            if(str[s[i]] >= 1){
                cout<<s[i];
                str[s[i]]--;
            }
        }
    }
}
