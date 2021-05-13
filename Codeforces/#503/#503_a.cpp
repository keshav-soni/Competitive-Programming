#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,h,a,b,k;
	cin>>n>>h>>a>>b>>k;
	for(int w=0;w<k;w++){
		int t1,f1,t2,f2,time=0;
		cin>>t1>>f1>>t2>>f2;
		if(t1==t2){
			cout<<abs(f1-f2);
			goto next;
		}
		time+=abs(t2-t1);
		if(a<=f1 && f1<=b){
			time+=abs(f1-f2);
		}
		else if(f1<a){
			time+=abs(a-f1);
			time+=abs(a-f2);
		}
		else if(f1>b){
			time+=abs(b-f1);
			time+=abs(b-f2);
		}
		
		cout<<time;
		next:
		cout<<"\n";
	}	
	return 0;
}
