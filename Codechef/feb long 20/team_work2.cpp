#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
 		ll n,cnt=0;
        cin>>n;
        unordered_map<string,int> m;
        vector<char> v1;
		vector<string>v2;        
        char t1;
        string t2;
        for(ll i=0;i<n;i++){
            cin>>t1>>t2;
            v1.push_back(t1);
            v2.push_back(t2);
            m[t1+t2]++;
        }        
        for(ll i=0;i<n-1;i++)
            for(ll j=i+1;j<n;j++) 
                if(v1[i]!=v1[j] &&  v2[i]!=v2[j])       
                    if (m[v1[i]+v2[j]]==0 && m[v1[j]+v2[i]]==0)
                        cnt++;

        cout<<cnt*2<<"\n";
	}
	return 0;
}
