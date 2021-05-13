#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n,k,count=0;
	cin>>n>>k;
	ll i=1,j=n,sum=0;
	sum=i+j;
	while(i<j){
		if(sum<k){
			i=k-n;
			sum=i+j;
		}
		else if(sum>k){
			j=sum-k;
			sum=i+j;
		}
		else if(sum==k){
			count++;
			i++;
			j--;
		}		
	}
	cout<<count;	
	
	return 0;
}
