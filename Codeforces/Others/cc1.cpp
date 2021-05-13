#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if((x%2==0 && y%2==0) || (x%2!=0 && y%2!=0)){
			if(x<y)
				cout<<"2";
			else
				cout<<"1";	
		}
		else if((x%2!=0 && y%2==0) || (x%2==0 && y%2!=0)){
			if(x<y)
				cout<<"1";
			else
				cout<<"2";			
		}
		cout<<"\n";
		
	}
	return 0;	
}
