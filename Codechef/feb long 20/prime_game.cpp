#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

bool Prime(ll n){
    for(ll i=2; i*i<=n;i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

signed main()
{
    boost
    ll ans=0;
 	ll arr[1000001];
    arr[0]=0;
    arr[1]=0;
    for(int i=2;i<1000001;i++){
        if(Prime(i))
        	ans++;
        arr[i]=ans;
    }     
    test{
        ll x,y;
        cin>>x>>y;
       
        if(arr[x]>y)
            cout<<"Divyam";
        else
            cout<<"Chef";
        cout<<"\n";    
    }
    for(int i=0;i<50;i++)
    	cout<<arr[i]<<" ";
	return 0;
}
