#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorial(ll n) 
{ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
} 

int main() {
	ll n,ans;
	cin>>n;
	ans=factorial(n)/(n*(n/2));
	cout<<ans;	
	return 0;
}
