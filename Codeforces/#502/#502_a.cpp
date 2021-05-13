#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,score=0,thomas;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<4;j++){
			cin>>x;
			score+=x;
		}
		a[i]=score;
		score=0;		
	}
//	for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
	thomas=a[0];
	sort(a,a+n, greater<int>());
//	for(int i=0;i<n;i++)
//		cout<<a[i]<<" ";
	for(int i=0;i<n;i++){
		if(thomas==a[i]){
			cout<<i+1;
			return 0;
		}
	}
			
	return 0;
}
