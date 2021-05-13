#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorial(ll n) 
{ 
    if (n == 0) 
        return 1; 
    return (n * factorial(n - 1))%1000000007; 
} 

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
    	ll x;
 		x=factorial(9);
		 cout<<x;   	
    	
    }
    return 0;
}



