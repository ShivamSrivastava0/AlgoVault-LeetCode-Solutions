class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int sum=0,mx=nums[0];
        
        for(auto x : nums){
            if(sum<0)
                sum=0;
            sum+=x;
            mx = max(mx, sum);                
        }
    return mx;    
    }
};