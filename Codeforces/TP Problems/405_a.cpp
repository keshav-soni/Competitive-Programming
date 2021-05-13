#include<bits/stdc++.h>
#define ll long long int

using namespace std;
int main()
{
	ll a,b,cnt=0;
	cin>>a>>b;
	while(a<=b){
		a=3*a;
		b=2*b;
//		cout<<a<<" "<<b<<endl;
		cnt++;
	}	
	cout<<cnt;
	
	return 0;
}
