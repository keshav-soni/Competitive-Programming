#include<bits/stdc++.h>
#define ll long long int
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define test   ll T; cin>>T; while(T--)
#define all(x) (x).begin(),(x).end()
#define pb 		push_back

using namespace std;

class Solution{
public:
    int subset(int a[],int n,int sum){
        bool dp[n+1][sum+1];
        for(int i=0;i<n+1;i++){
            for(int j=0;j<sum+1;j++){
                if(i==0)
                    dp[i][j]=0;
                if(j==0)
                    dp[i][j]=1;
            }
        } 
        for(int i=1;i<n+1;i++){
            for(int j=1;j<sum+1;j++){
                if(a[i-1]<=j)
                    dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
                else
                    dp[i][j]=dp[i-1][j];
            }
        }
//        for(int i=0;i<n+1;i++){
//            for(int j=0;j<sum+1;j++){
//                cout<<dp[i][j]<<" ";
//            }
//            cout<<"\n";
//        }
        return dp[n][sum];
    }
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N ;i++)
            sum+=arr[i];
        if(sum%2==0)    
            return subset(arr,N,sum/2);
        else
            return 0;
    }
};

signed main()
{
    boost
    test{
    	int n;
    	cin>>n;
		int a[n];
    	for(int i=0;i<n;i++)
    		cin>>a[i];
    		Solution o;
		cout<<o.equalPartition(n,a);
	}
	return 0;
}
