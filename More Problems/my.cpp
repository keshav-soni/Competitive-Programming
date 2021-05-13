#include <bits/stdc++.h>

using namespace std;
int main()

{
   int n,m,sum=0,k;
	cin>>n>>m>>k;
	 int track[k][3];
	for(int i=0;i<k;i++)
	 for(int j=0;j<3;j++)
          cin>>track[i][j];

  int size=m*n;
   int a[k];
   for(int i=0;i<k;i++)
   {
   
       a[i]=abs(track[i][1]-track[i][2])+1;
   }
    for(int i=0;i<k;i++)
         sum=sum+a[i];

    cout<<size-sum;



  return 0;
}

