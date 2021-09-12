#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
	int n;
	cin>>n;
	int a[n];
	int target;
	cin>>target;
	for(int i=0;i<n;i++)	
		cin>>a[i];
		 
	int mn=INT_MAX;
	int x=0;
	for(int i=0;i<n;i++){
		x+=a[i];
	}
	if(x<target)
		cout<<-1<<endl;
	else{
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=a[j];
			if(sum>=target)
				mn=min(mn,abs(j-i)+1);
		}
	}
	for(int i=n-1;i>=0;i--){
		int sum=0;
		for(int j=i;j>=0;j--){
			sum+=a[j];
			if(sum>=target)
				mn=min(mn,abs(j-i)+1);
		}
	}
	cout<<mn<<endl;			
	}		

}

signed main()
{
		solve();
	return 0;
}
