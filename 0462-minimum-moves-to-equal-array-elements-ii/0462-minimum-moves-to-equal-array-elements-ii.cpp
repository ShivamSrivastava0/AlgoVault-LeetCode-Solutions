class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int c=0,md= nums[nums.size()/2];
        
        for(auto i:nums){
            c+= abs(i-md);
        }
    return c;
    }
};