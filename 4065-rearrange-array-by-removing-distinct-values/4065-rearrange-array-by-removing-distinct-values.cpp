class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int, int> mp;
        for(auto x : nums){
            mp[x]++;
        }
        int op=0;
        while(op<nums.size()){
            for(auto i : mp){
                int p = i.first;
                if(i.second>0 && op<nums.size())
                    nums[op++] = i.first;
                    mp[p]--;
            }
        }
    return nums;
    }
};