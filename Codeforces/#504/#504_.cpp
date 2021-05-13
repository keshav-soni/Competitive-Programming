#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[2*n];
	set <int> s;
	for(int i=0;i<2*n;i+=2)	
	{
		a[i]=i+1;
		cin>>a[i+1];
	}
	for(int i=0;i<2*n;i++){
		s.insert(a[i]);
		if(prev==next){
			cout<<a[i]<<
		}
	}
	return 0;
}
