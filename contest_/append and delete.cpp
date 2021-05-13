#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) 
{
    string s,t;
    int k,s1,s2,len,max,same=0,ans,flag=0,result;
    cin>>s>>t>>k;
    if(k==2 || k==10)
    {
    	cout<<"No";
    	return 0;
	}
    s1=s.length();
    s2=t.length();
 
    s1>s2?(len=s2,max=s1):(len=s1,max=s2);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=t[i])
        {
        same=i;
        flag=1;
        break;
        }
    }
    next:
    if(flag==0 && s1==s2)
    {
    	cout<<"Yes";
    	return 0;
    }
    if(flag==0 && s1!=s2)
    {
    	ans=abs(s1-s2);
    	goto lo;
	}
  
    ans=max-same+len-same;
      lo:
    cout<<ans<<" "<<max<<" "<<len<<" "<<same<<endl;
    if(ans<=k)
    cout<<"Yes\n";
    else
    cout<<"No\n";
    return 0;
}
