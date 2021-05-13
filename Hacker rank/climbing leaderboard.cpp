#include<iostream>
#include<math.h>
using namespace std;

int binary(int l,int h,int key,long *a)
{	
    int mid,last=h;
    while(l<=h)
    {
        mid=floor((l+h)/2);
        if(key==a[mid])
            return mid;
        else if(key<a[mid])
        {
            if(l==h && h==mid && mid!=last)
                return mid+1;
				 l=mid+1;   
        }
        else
        {
            if(l==h && h==mid && mid!=last)
                return mid+1;
 	          h=mid-1;
        }
    }
    return mid;
}

int main()
{
    int n1,n2,index;
    cin>>n1;
    long int a[n1+2];
    int c[n1+2];
    for(int i=1;i<=n1;i++)
      cin>>a[i];
    a[0]=1000000000;
    a[n1+1]=0;  
    cin>>n2;

    c[0]=0;     
    c[1]=1;
    for(int i=2;i<n1+2;i++)
    {
      if(a[i]!=a[i-1])
            c[i]=c[i-1]+1;
      if(a[i]==a[i-1])
             c[i]=c[i-1];
    }
	  
//    for(int i=0;i<n1+2;i++)
//    cout<<"\n"<<c[i]<<" ";
	 long int x;
    for(int i=0;i<n2;i++)
   {
      cin>>x;
      index=binary(0,n1+1,x,a);
//      if(index!=-1)
      cout<<c[index]<<endl;
    }
    return 0;
}


