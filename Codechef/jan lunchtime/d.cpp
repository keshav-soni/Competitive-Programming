#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;

bool solution(int a, int b, int n) 
{ 
    for (int i = 0; i * a <= n; i++) { 
        if ((n - (i * a)) % b == 0) { 
            return 1; 
        } 
    }   
    return 0;
} 

signed main()
{
    boost
    test{
		ll n,k,x,y;
		cin>>n>>k;
		ll a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			b[i]=0;
		}
		for(int i=0;i<n;i++){
			if(a[i]%k!=0){
				for(int j=0;j<n;j++){
					if( solution(k,a[j],a[i]) ){
						cout<<a[i]<<" "<<a[j]<<endl;
						b[i]=1;	
					}
				}			
			}
			else
				b[i]=1;
		}
	
		for(int i=0;i<n;i++){
			if(b[i]==0){
				cout<<"NO";
				goto next;
			}
		}
		for(int i=0;i<n;i++)
			cout<<b[i]<<" ";
		cout<<"YES";
		next :
		cout<<"\n";	
	}
	return 0;
}
