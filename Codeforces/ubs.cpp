#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
const int MOD = 1e9 + 7;
using namespace std;
using namespace std; 

int main() 
{
    string s,num;
    int k;
    cin>>s>>k>>num;
    vector<int> v(26,0);
    int j=0;
    for(int i=0;i<num.size();i++)
    {
         int val=num[i]-'0';
         v[j]=val;
         j++;
    }
    vector<int> nums(s.length(),0);
    j=0;
    for(char ch:s)
    {
        nums[j]=v[ch-'a'];
        j++;
    }
    int ans=0,count=0,st=0;
    
    for(int i=0;i<s.length();i++)
    {
        count+=nums[i];
        while(i-st+1-count>k)
             count-=nums[st++];
             
        ans=max(ans,i-st+1);
    }
    cout<<ans<<"\n";
}
