#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n],b[m];
        for(int i=0;i<n;i++)cin>>a[i];
        
        for(int i=0;i<m;i++)cin>>b[i];

        for(int i=0;i<n;i++)
        {
            int t1 = upper_bound(b ,b+m , a[i] ) - b;
            if(t1 == m-1)
            {
                cout<<"-1"<<" ";
            }
            else
            {
              cout<<b[t1]<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
