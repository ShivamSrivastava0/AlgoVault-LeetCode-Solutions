class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int mn=INT_MAX,mx=INT_MIN;
        int mnidx=0,mxidx=0;
        for(int i=0;i<n;i++){
            if(mn>nums[i]){
                mn = nums[i];
                mnidx= i;
            }
            if(mx<nums[i]){
                mx=nums[i];
                mxidx= i;
            }
        }   

        int l=min(mnidx, mxidx);
        int r=max(mnidx,mxidx);

    return min({r+1,n-l,(l+1)+(n-r)});
    }
};