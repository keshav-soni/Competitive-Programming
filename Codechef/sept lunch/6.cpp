#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	int t;
	cin>>t;
	while(t--){
		ll n,count=0;
		cin>>n;
		int a[n],b[101];
			for(int i=0;i<n;i++)
				cin>>a[i];
			for(int i=0;i<=100;i++)
				b[i]=0;	
			for(int i=0;i<n;i++){
				for(int j=i+1;j<n;j++){
					if(a[i]>a[j] && b[i]==0 && b[j]==0 ){
						b[i]++;
						b[j]++;
//						cout<<a[i]<<" "<<a[j];
						count++;
					}	
				}
			}
//			for(int i=0;i<=100;i++)
//				cout<<b[i]<<" ";	
			if(count%2==0)
				cout<<"YES";
			else
				cout<<"NO";	
				
			cout<<"\n";
	}
		return 0;
}
