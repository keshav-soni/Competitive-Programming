class Solution {
public:
    bool fun(vector<int>& a, int threshold,int mid){
        int sum=0;
        for(int i=0;i<a.size();i++){
            double x=ceil(a[i]*1.0/mid); 
            sum+=(int)x;
        }        
        return (sum<=threshold); 
    }
    
    int smallestDivisor(vector<int>& a, int threshold) {
        int low=1;
        int high=*max_element(a.begin(),a.end());
        
        int ans=0;
        
        while(low<=high){
            int mid=(low+high)/2;
            if(fun(a,threshold,mid)){ 
                ans=mid;
                high=mid-1;
            }
            else
                low=mid+1;
        }
        
        return ans;
    }
};
