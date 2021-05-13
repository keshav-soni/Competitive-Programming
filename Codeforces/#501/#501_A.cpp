#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x,count=0;
	cin>>n>>m;
	int a[m],b[m];
	for(int i=0;i<m;i++){
		a[i]=i+1;
		b[i]=0;
	}
	for(int i=0;i<n*2;i++){
		cin>>x;
		b[x-1]++;
	}
	for(int i=0;i<m;i++){
		cout<<b[i]<<" ";
	}
	cout<<"\n";
	for(int i=0;i<m;i++){
		if(b[i]==0)
			count++;
//		else if(b[i]>2){
//			cout<<0;
//			return 0;
//		}
	}
	if(count==0){
		cout<<-1;
		return 0;
	}
	cout<<count<<"\n";
	for(int i=0;i<m;i++)
		if(b[i]==0)	
			cout<<a[i]<<" ";
				
	return 0;
}
