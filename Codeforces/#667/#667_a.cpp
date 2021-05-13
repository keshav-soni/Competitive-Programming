#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--){
		long long int a,b;
		long long int x;
		cin>>a>>b;
		if(a==b){
			cout<<0;
			goto next;
		}
		else{
			x=ceil((abs(a-b))/10.0);
			cout<<x;
		}	
		next:
			cout<<"\n";
		
		
		
	}


	return 0;
}
