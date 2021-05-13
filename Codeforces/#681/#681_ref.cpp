#include<bits/stdc++.h>
using namespace std;
 
#define ll long long
#define debug(x) cout<<":["<<x<<"XE]"<<endl;
#define debug2(x,y) cout<<":["<<x<<" "<<y<<"XE]"<<endl;
 
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,ss=0;
        cin>>n;
        ll l1[n+1];
        vector<pair<ll,ll>>v;
        for(int i=1;i<=n;i++)cin>>l1[i];
        for(int i=1;i<=n;i++){
            ll a;
            cin>>a;ss+=a;
            v.push_back({l1[i],a});
        }
        sort(v.rbegin(),v.rend());
//        for(auto i:v)cout<<i.first<<" "<<i.second<<endl;
        ll s=v[0].second;
		ll ans=min(v[0].first,ss);
        for(int i=1;i<v.size();i++){
            ans=min(ans,max(s,v[i].first));
            s+=v[i].second;
        }
        cout<<ans<<endl;
    }
}
