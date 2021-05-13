#include<bits/stdc++.h>
#define ll long long int
#define      boost          ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define      test           ll t; cin>>t; while(t-->0)
using namespace std;
bool fun1(ll net)
{    
    if (net<=1)
		return false;	  
    if (net<=3)
		return true;  
    if (net%2==0 || net%3==0)
		return false;	
    for (ll i=5; i*i<=net; i=i+6)
    	if (net%i == 0 || net%(i+2) == 0)
    		return false;
    return true;
}

ll fun2(ll tt)
{
    if (tt <= 1)
    	return 2;        
    if(fun1(tt))
    	return tt;        
    ll ty = tt;
    int flag = 0;   
    while (!flag)
	{
        ty++;
        if (fun1(ty))
        	flag=1;            
    }
    return ty;
}
int main()
{
    boost
    test{
		ll x;
        cin>>x;
        ll req1,req2;
        ll p=1;
        req1 = fun2(p+x);
        req2 = fun2(req1+x);
        cout<<req1<<" "<<req2<<endl;
        cout<<(req1*req2);
		cout<<"\n";		
	}
	return 0;
}
