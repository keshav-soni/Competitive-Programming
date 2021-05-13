#include     <bits/stdc++.h>
#include     <algorithm>
#include     <vector>
#include     <set>
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           int t; cin>>t; while(t-->0)
#define      pb             push_back
#define      pp             pop_back
#define      int            long long
#define      mk             make_pair
#define      fo(i,n)        for(ll i=0;i<n;i++)
#define      fo1(i,n)       for(ll i=1;i<=n;i++)
#define      ll             long long
#define      debug(i,x)     cout<<"Case #"<<i<<": "<<x<<"\n"
#define      debug1(i,x,y)  cout<<"Case #"<<i<<": "<<x<<" "<<y<<"\n"
#define      mx             1000000007
#define      pi             pair<int,int>
#define      pl             pair<long long,long long>
#define      fi             first
#define      se             second
using namespace std;
ll power(ll a,ll b){
if(b==0) return 1;
if(b%2==1) return (a*power(a*a,b/2))%mx; 
return power((a*a)%mx,b/2);
}
ll gcd(ll a, ll b){ 
    if (a == 0)
       return b;
    if (b == 0)
       return a;   
    if (a == b)
        return a;  
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

void solve(){
int n,m,ans=0;
cin>>n>>m;
char a[n+1][m+1];
int hori[n+1][m+1];
fo1(i,n){
    fo1(j,m){ 
        cin>>a[i][j];
        hori[i][j]=0;
    }
}

fo1(i,n){
    fo1(j,m){
        int l=j,r=j,count=0;
        while(l>=1&&r<=m){
            if(a[i][l]=='*'&&a[i][r]=='*'){
                l--; r++; count++;
                
            }
            
            else break;
            
            
        }
        hori[i][j]=count;
    }
}
fo1(i,n){
    fo1(j,m){
        int ver=i,sum=0;
        while(ver<=n){
            if(hori[ver][j]>sum){
                ver++;
                sum++;
            }
            else break;
            
            
        }
         ans+=sum;
    }
    
}

cout<<ans<<"\n";







}
signed main(){
    boost
     test{
     solve();
}
}

