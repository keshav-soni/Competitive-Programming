#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,zero=0,one=0,sum=0,c_0=0,c_1=0;
	cin>>n;
	string a,b,x,c;
	cin>>a>>b;
	for(int i=0;i<n;i++)
	{
		if(b[i]=='0'){
			x=a[i];
			c+=x;
		}
	}
//	cout<<"c"<<c<<endl;
	for(int i=0;i<n;i++)
	{
		if(a[i]=='0')
			zero++;
		else
			one++;	
	}
//	cout<<a<<" "<<one<<" "<<zero<<endl;
	for(int i=0;i<c.length();i++)
	{
		if(c[i]=='0'){
			sum+=one;
			c_0++;
		}
		else{
			sum+=zero;
			c_1++;
		}
	}
//	cout<<one<<" "<<zero<<endl;
	sum=sum-(c_0*c_1);
	
	cout<<sum;
	
	return 0;
}
