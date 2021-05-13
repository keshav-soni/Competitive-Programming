#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

#define f(i,n) for(int i=0;i<n;++i)
#define f1(i,n) for(int i=1;i<n;++i)
#define rep(i,a,b) for(int i=a;i<b;++i)

#define pb push_back
#define pob pop_back
#define mp(a,b) make_pair(a,b)

typedef vector<int> vi;
typedef vector<ll> vl;

const int N=3e5+2;
int a[N];
int n;
int check(int i){
    if((i>0 && i<n-1) && ((a[i]>a[i-1] && a[i]>a[i+1]) || (a[i]<a[i-1] && a[i]<a[i+1]))){
        return 1;
    }
    else return 0;
}
int main(){
    int t;
    cin>>t;
    f(p,t){
        cin>>n;
        f(i,n)cin>>a[i];

        vi v;
        bool orig[n]={0};
        f1(i,n-1){
            if(check(i)){
                v.pb(i);
                orig[i]=1;
            }
        }
        int ans=v.size();

        f1(i,n-1){
            int x=a[i];
            a[i]=a[i-1];
            ans=min(ans,(int)v.size()-orig[i]+check(i)-orig[i-1]+check(i-1)-orig[i+1]+check(i+1));
            cout<<ans<<" "<<orig[i]<<" "<<check(i)<<" "<<orig[i-1]<<" "<<check(i-1)<<" "<<orig[i+1]<<" "<<check(i+1)<<endl;
            a[i]=a[i+1];
            ans=min(ans,(int)v.size()-orig[i]+check(i)-orig[i-1]+check(i-1)-orig[i+1]+check(i+1));
            cout<<ans<<" "<<orig[i]<<" "<<check(i)<<" "<<orig[i-1]<<" "<<check(i-1)<<" "<<orig[i+1]<<" "<<check(i+1)<<endl;
			a[i]=x;
        }
        cout<<ans<<endl;
    }

    return 0;

}

