#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
	ll te;
	cin>>te;
	while(te--){
		int a[3],t=0;
		for(int i=0;i<3;i++)
			cin>>a[i];
		for(int i=0;i<3;i++){
			t+=a[i]-1;
		}
		if((t+1)%7==0)
			cout<<"YES";
		else
			cout<<"NO";
		cout<<"\n";		
	}
	return 0;
}
