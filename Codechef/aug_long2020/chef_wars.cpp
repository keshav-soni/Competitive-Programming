#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		int h,p;
		cin>>h>>p;
		while(1)
		{
			h=h-p;
			if(p>=2)
			p=p/2;
			else
			p=0;
			if(h<=0 || p<=0)
			break;
		}
		if(h<=0)
		cout<<1;
		else if(p<=0)
		cout<<0;
	}
	return 0;
}
