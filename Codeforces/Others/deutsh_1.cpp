#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	string forth;
	cin>>forth;
  string final;
    int max=0,count=0;
    int min=200000;
	int x=100000;
	int y=100000;
	int r_east, r_west , l_west , l_east , right , left;
	for(int i=0;i<forth.length();i++){
    	if(forth[i]=='N')
    		x++;
    	else if(forth[i]=='E')
			y++;
		else if(forth[i]=='W')
			y--;
		if(y>max)
			max=y;
		if(y<min)
			min=y;	
		if(forth[i]=='N')
			count++;				
	}
    r_east=max+1-y;
    r_west=max+1-100000;
    l_west=abs(y-min)+1;
    l_east=100000-min+1;
    right=r_east+r_west;
    left=l_east+l_west;
//    cout<<min<<" "<<y<<endl;
//    cout<<l_west<<" "<<l_east<<endl; 
//	cout<<left<<" "<<right<<endl;
    if(right>left){
    	for(int i=0;i<l_west;i++)
    		final+='W';
    	for(int i=0;i<count;i++)
			final+='S';
		for(int i=0;i<l_east;i++)
			final+='E';	
		
	}
    else{
    	for(int i=0;i<r_east;i++)
    		final+='E';
    	for(int i=0;i<count;i++)
			final+='S';
		for(int i=0;i<r_west;i++)
			final+='W';			
	}		
	cout<<final;
	
return 0;
	
}
