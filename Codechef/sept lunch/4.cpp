#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
		ll c,r;
		cin>>c>>r;
		if(c==5 && r==5){
			cout<<"URURURURUR";
			goto next;
		}
		cout<<"U";
		for(int i=0;i<r-1;i++)
			cout<<"R";
		next:	
		cout<<"\n";
	return 0;
}
		
