#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n,sum=0,sum2=0,x,temp=0,flag=0;
		cin>>n;
		ll a[n];
		for(ll i=0;i<n;i++){
			cin>>a[i];
			sum+=i;
			sum2+=a[i];
		}
		if(sum2<sum)
			cout<<"NO";
		else{
			for(ll i=0;i<n;i++)
			{
				if(a[i] +temp>=i)
					temp= (a[i] +temp) - i;
				else
				{
					cout<<"NO";
					flag = 1;
					break;
				}
			}			
			if(flag == 0)
				cout<<"YES";
		}
		cout<<"\n";		

	}
	return 0;
}
