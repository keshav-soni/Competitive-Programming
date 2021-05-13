#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
     	long long signed int ts,cnt=0;
		cin>>ts;
		while(ts%2==0 && ts>0)
			ts=ts/2;

        if(ts%2!=0 && ts>1) 
		  	cnt=ts/2;
		cout<<cnt<<"\n";  	
	}
	return 0;
}
