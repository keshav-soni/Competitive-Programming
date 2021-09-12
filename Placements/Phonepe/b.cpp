#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool prime(int n)
{
    if (n<=1)
        return 0;
    if(n<=3)
		return 1;    
 	if(n%2==0 || n%3==0)
 		return 0;
  
    for (int i=5;i*i<=n;i+=6)
        if (n%i==0 || n%(i+2)==0)
            return 0;
            
    return 1;
}
 
void largestPrime(string s)
{
    vector<pair<string,int>>v{{"",0}};
    int req=0;
 
    for (int i=0;i<s.length();i++) {
        int n=v.size(); 
        for (int j=0;j<n;j++) {
            pair<string,int> pr = v[j];            
            string x = pr.first;            
            int t = pr.second; 
            
            if (s[i]=='0') {
            	pr.first=x+'0';
                pr.second=((t<<1)+0);
            }
            else{
                pr.first=x+'1';
                pr.second=((t<<1)+1);
            } 
            v.push_back(pr); 
            int number=pr.second;             
            
            if (prime(number))
                req=max(req,number);
        }
    }
 
    if (req != 0)
        cout<<req;
    else
        cout<<-1;
}

signed main()
{
	string s;
	cin>>s;
		largestPrime(s);
	return 0;
}
