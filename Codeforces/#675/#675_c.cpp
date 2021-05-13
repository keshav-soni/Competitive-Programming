#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int p[200000];

int main() {
	    string s;
    cin>>s;
 
    int fa=0;
    for(int i=0;i<s.length();i++){
        int k=i+1;
        int ans=0;
        int z=i;
        ans=(z*(z+1))/2;
        ans%=1000000007;
 
        fa=(fa%1000000007+((pow(10,s.length()-1-i)*ans)%1000000007*(s[i]-'0'))%1000000007)%1000000007;
 
        fa=(fa%1000000007+(p[s.length()-1-i]*(s[i]-'0')%1000000007))%1000000007;
 
 
}
cout<<fa<<endl;

	
	return 0;
}
