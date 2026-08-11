class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i])
                sum += nums[i];
            else break;
        }
        sort(nums.begin(),nums.end());
        for(int i:nums){
            if(i==sum)
                sum++;
            else if(i>sum) break;
        }
    return sum;
    }
};