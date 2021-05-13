#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	for(int k=0;k<t;k++)
	{
		long long int x,y,l,r,z,temp;
		cin>>x>>y>>l>>r;
		z=x|y;
//		long long int binaryNum1[32],binaryNum2[32],binaryNum3[32],temp1,temp2,temp3; 
// 	    int cnt1 = 0,cnt2=0,cnt3=0; 
// 	    l=temp1;
// 	    z=temp2;
// 	    r=temp3;
//	    while (temp1 > 0) { 
//	        binaryNum1[cnt1] = temp1 % 2; 
//	        temp1 = temp1 / 2; 
//	        cnt1++; 
//	    }
//		while (temp2 > 0) { 
//	        binaryNum2[cnt2] = temp2 % 2; 
//	        temp2 = temp2/ 2; 
//	        cnt2++; 
//	    } 
//		while (temp3 > 0) { 
//	        binaryNum3[cnt3] = temp3 % 2; 
//	        temp3 = temp3 / 2; 
//	        cnt3++; 
//	    }
		if(l<=z && z<=r)
		goto next;
        if(z>r)
         temp=z^r;
         z=z-temp;
        //if(z<l)
        //z=z|l;
        next:
    	cout<<z<<"\n";       
    }
return 0;
}
