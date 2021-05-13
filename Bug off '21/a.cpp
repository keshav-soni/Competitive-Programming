#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int n;cin>>n;
    string s;cin>>s;
    int fre[26];
    for(int i=0;i<26;i++)
        fre[i]=INT_MAX;
    int l=0,r=n-1;
    int ans=0;
    
    for(;r>=0;r--)
    {
        fre[s[l]-'0']++;
        while(l<=r && fre[s[l]-'0']>0)
        {
            fre[s[l]-'0']--;
            l++;
        }
        bool ok=false;
        for(int j=0;j<26;j++)
        {
            if(fre[j])
                ok=true;
        }
        if(ok){
            ans=max(ans,l-1+r-1);
			cout<<l<<" "<<r<<endl;
		}
    }
    if(ans==0)
        ans=-1;
    cout<<ans<<endl;
    return 0;
}
/*
27
abcdefghjiklmnopqrstuvwxyza
*/
