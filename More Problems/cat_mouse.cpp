#include <iostream>
using namespace std;

struct position
{
	int a;
	int b;
	int c;
};

void catch1(int a,int b,int c)
{
	int dist1,dist2;
	dist1=a-c;
	dist2=b-c;
	if(dist1<0)
		dist1=-dist1;
	if(dist2<0)
		dist2=-dist2;
	if(dist1<dist2)
		cout<<"Cat A"<<endl;
	if(dist1>dist2)
		cout<<"Cat B"<<endl;
	if(dist1==dist2)
	    cout<<"Mouse C"<<endl;
}

int  main()
{
	int n;
	cin>>n;
	struct position p[n];
    for(int i=0;i<n;i++)
      {
      	cin>>p[i].a;
      	cin>>p[i].b;
      	cin>>p[i].c;
	  }
	for(int i=0;i<n;i++)
	{
	   catch1(p[i].a,p[i].b,p[i].c);
    }
    return 0;	
}
