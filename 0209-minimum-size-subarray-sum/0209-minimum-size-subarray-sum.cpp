class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int low=0,high=0;
        int mn=INT_MAX;
        int sum=0;
        while(high<nums.size()){
            sum+= nums[high];
            while(sum>=target){
                int len = high-low+1;
                mn = min(mn, len);
                sum-=nums[low];
                low++;
            }
            high++;
        }
    if(mn==INT_MAX)
        return 0;
    return mn;
    }
};