#include <iostream>
using namespace std;
#define ll long long int 

ll fact(ll n){
	if(n-1!=0)
    	return n*fact(n-1);
    else 
		return 1;	
}

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        cout<<fact(n)<<"\n";
    }
	return 0;
}
