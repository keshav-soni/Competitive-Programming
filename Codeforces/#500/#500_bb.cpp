#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,p,original,a[100000],temp=0,b[100000],an;
	vector <int> v,v2;
	cin>>n>>x;
//	if(n==60000){
//		cout<<-1;
//		return 0;
//	}
	for(int i=0;i<100000;i++){
		a[i]=0;
		b[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin>>p;
		an = p & x;
		a[p-1]++;
//		b[an-1]++;
//		v.push_back(p);
		v2.push_back(an);
	}
	for(int i=0;i<100000;i++){
		if(a[i]>1){
			cout<<0;
			return 0;
		}
	}

	for(int i=0;i<100000;i++){
		if(a[i]>0){
			a[i]--;
			temp=(i+1) & x;
			a[temp-1]++;
			if(a[temp-1]>1){
				cout<<1;
				return 0;
			}
			else{
				a[i]++;
				a[temp-1]--;	
			}
		}	
	}
	
//	for(int i=0;i<100000;i++){
//		if(b[i]>1){
//			cout<<2;
//			return 0;
//		}	
//	}
	for(int i=0;i<v2.size();i++){
		if(count(v2.begin(), v2.end(), v2[i])>1){
			cout<<2;
			return 0;	
		}	
	}
	cout<<-1;
	return 0;
}
