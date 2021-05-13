#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
signed main()
{
    boost
    test{
		ll n;
		cin>>n;
	    if (n%2==0) 
	    {
	        for (ll i=1;i<=n;i++)
	        {
	            for (ll j=i+1;j<=n;j++)
	            {
	                if (i%2==1 && j==(i + 1))
	                    cout <<0<< " ";
	                else if ((i+j)%2)
	                    cout<<1<< " ";
	                else
	                    cout<<-1<< " ";
	            }
	        }
	    }
	    else
	    {
	        for (ll i=1;i<=n;i++)
	        {
	            for (ll j =i+1;j<=n;j++)
	            {
	                if ((i+j)%2)
	                    cout<<1<< " ";
	                else
	                    cout<<-1<< " ";
	            }
	        }
	    }
		cout<<"\n";

	}
	return 0;
}
