#include <iostream>
using namespace std;

void all_bomb(char *a,int h,int w)
{
    for(int i=0;i<h;i++)
	  for(int j=0;j<w;j++)
	  {
		if(*((a+i*w) + j)!=79)
		    *((a+i*w) + j)=120;
	  }
}

void detonate(char *a,int h,int w)    
{
	for(int i=0;i<h;i++)
	  for(int j=0;j<w;j++)
	  {
	  	if(*((a+i*w) + j)==79)
	  	{   *((a+i*w) + j)=46;
	  	
	  		if(j+1<w && *((a+i*w) + j+1)!=79)
	  	  		  *((a+i*w) + j+1)=46;
		
	  		if(j-1>=0 && *((a+i*w) + j-1)!=79)
	  			  *((a+i*w) + j-1)=46;
		
	        if(i+1<h && *((a+(i+1)*w) + j)!=79)
	              *((a+(i+1)*w) + j)=46;
        
	        if(i-1>=0 && *((a+(i-1)*w) + j)!=79)
	    		   *((a+(i-1)*w) + j)=46;        
		} 
		
      }
	for(int i=0;i<h;i++)
 	  for(int j=0;j<w;j++)
	  	if(*((a+i*w) + j)==120)   
	 	   *((a+i*w) + j)=79;
}

void display(char *a,int h,int w)   
{
	for(int i=0;i<h;i++)
	  for(int j=0;j<w;j++)
	  {
	  	if(*((a+i*w) + j)==120) 
	  	   *((a+i*w) + j)=79;
	  	     cout<<*((a+i*w) + j);
		  if(j==w-1)
		  cout<<"\n";
	  }
}

int main()
{
	int h,w;
	int n;
	cin>>h>>w>>n;                   
	char a[h][w];
	for(int i=0;i<h;i++)
	for(int j=0;j<w;j++)	
	cin>>a[i][j];
	if(n==1)
	{
		display(&a[0][0],h,w);		
		return 0;
	}
	else
	{
	   int check=n % 2;
	   if(check!=0)
	   {
	   	   int loop=(n-1)/2;
	   	   for(int i=0;i<loop;i++)
	    	{
		    all_bomb(&a[0][0],h,w);	   	   	
			detonate(&a[0][0],h,w);
	       }
		  	display(&a[0][0],h,w);	
    	  return 0;
         }
	   	else
	   	{
	   		if(n==2)
	   		{
			   	all_bomb(&a[0][0],h,w);
				   return 0;	   	   	
			}
	   		int loop2=n/2-1;
	   		for(int i=0;i<loop2;i++)
	   		{
	   			detonate(&a[0][0],h,w);
		     	all_bomb(&a[0][0],h,w);	   
			}
    	}
       }	
    display(&a[0][0],h,w);                                    
	return 0;
}
