#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n,k,count=0;
	cin>>n>>k;
	string s,x;
	cin>>s;
	for(int j=1;j<s.length();j++){
		if(s[0]==s[j]){
			count=0;
			for(int i=0;i<s.length();i++){
				if(s[j]==s[i]){
					
					cout<<s[j]<<" "<<j<<endl;
					count++;
					j++;
				}
				else{
					j--;
					break;
				}
			}			
		}
	}
//	if(count==s.length()-1){
//		cout<<s;
//		return 0;
//	}
	if(count==1 && s[0]!=s[n-1])
		x=s;
	else
		x=s.substr(count,s.length()-count);	
	cout<<s;
	for(int i=0;i<k-1;i++)
	cout<<x;
	return 0;
}
