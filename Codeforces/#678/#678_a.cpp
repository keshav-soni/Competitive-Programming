#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll start;
    cin>>start;
    while(start--)
    {
 		ll n, m,x,sum=0;
		cin>>n>>m;
		for(int i=0;i<n;i++){
			cin>>x;
			sum+=x;
		} 	   	
		if(sum==m)
		cout<<"YES";
		else cout<<"NO";
		cout<<"\n";
    }
    return 0;
}
