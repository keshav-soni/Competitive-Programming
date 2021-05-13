#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		string x;
		cin>>n;
		vector <char> v;
		for(int j=0;j<n;j++){
			cin>>x;
			for(int i=0;i<x.length();i++)
				v.push_back(x[i]);
		}
//		for(int i=0;i<v.size();i++)
//		cout<<v[i]<<" ";
//		cout<<"\n";
		for(int i=0;i<v.size();i++){
//			cout<<(count(v.begin(),v.end(),v[i]))<<" ";
			if((count(v.begin(),v.end(),v[i]))%n!=0 || n>(count(v.begin(),v.end(),v[i]))){
				cout<<"NO";
				goto next;
			}	
		}
		
		cout<<"YES";
		next:
		cout<<"\n";
	}	
	
	
	return 0;
}
