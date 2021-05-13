#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll t;
	cin>>t;
	while(t--){
			ll num,total,temp,sum=0,count=0;
			cin>>num;
			if(num<3){
				if(num==1)
				cout<<0;
				else if(num==2)
				cout<<0;
//				else 
//				cout<<2;
				goto next;
			}
			temp=num;
			total=(num*(num+1))/2;
			if(total%2!=0){
				cout<<0;
				goto next;
			}
			total=total/2;
			for(int j=0;j<=temp/2;j++){
				if(sum+num<=total){
					sum+=num;
					num--;
					count++;
				}
				else
					break;
			}
			if(sum!=total)
				count++;
			cout<<count;
			next:
			cout<<"\n";			
	}
	return 0;
}
