#include<bits/stdc++.h>
using namespace std;

class Solution{
  
public:
    int minCost(vector<int>arr){
        if(arr.size()<=2) return 0;
        
        int ret=solve(arr);
        
        for(int i=0;i<arr.size();i++)arr[i]=-arr[i];
        
        return min(ret,solve(arr));
    }
    
    int solve(vector<int> arr){
        
        int n=arr.size();
        
        vector<int>u=arr;
        sort(u.begin(),u.end());
        for(int i=0;i<n;i++)
       		cout<<u[i]<<" ";
			   cout<<"\n";
		int N=0;
        for(int i=0;i<n;i++)
            if(i==0 || u[i]>u[i-1]) 
				u[N++]=u[i];
            
        for(int i=0;i<n;i++)
       		cout<<u[i]<<" ";
			   cout<<"\n"; 
        vector<int>dp(N,0);
        for(int i=0;i<n;i++){
            int opt=INT_MAX;
            for(int j=0;j<N;j++){
                opt=min(opt,dp[j]);
                dp[j]=opt+abs(arr[i]-u[j]);
            }
        }
        
        int opt=INT_MAX;
        for(int j=0;j<N;j++)opt=min(opt,dp[j]);
        return opt;
    }    
};
    
int main(void){
    
    Solution *s=new Solution;
    
//    cout<<s->minCost({0,1,2,5,6,5,7})<<endl;
    cout<<s->minCost({9,8,7,2,3,3})<<endl;
//    cout<<s->minCost({10,12,5})<<endl;
    
    return 0;
}
