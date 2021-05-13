#include<iostream>
#include<string.h>
using namespace std;

class stalkers{
	public:
	   string a[10000];
};

int main()
{
	int sub,nof;
    cin>>sub;
    cin>>nof;  
    stalkers s[nof];
    string reven[sub];
      for(int i=0;i<sub;i++)
    {
       cin>>reven[i];
    }
       
    for(int j=0;j<nof;j++)
	{
     	for(int i=0;i<sub;i++)	
         	cin>>s[j].a[i];
	}
	for(int j=0;j<nof;j++)
	{
		int count=0;
	for(int i=0;i<sub;i++)
	{
		if(reven[i]==s[j].a[i])
		   count++;
	}
	if(count>=sub/2)
    cout<<"stalker";
    else
    cout<<"Not a stalker";
   	cout<<count;
	cout<<sub/2;
    }

	return 0;
}
