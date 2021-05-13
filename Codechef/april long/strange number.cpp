#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
      long int n,y,count=0;
	  cin>>n>>y;
    while (n%2 == 0) 
    { 
        count++; 
        n = n/2; 
    } 
    for (int i = 3; i <= sqrt(n); i = i+2) 
    { 
        while (n%i == 0) 
        { 
           count++;
            n = n/i; 
        } 
    } 
    if (n > 2) 
        count++;
//    cout<<count<<endl;
    if(count>=y)
    cout<<1<<endl;
    else
    cout<<0<<endl;
   
    }
    return 0;
}
