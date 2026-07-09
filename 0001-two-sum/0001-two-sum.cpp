class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for(int i=0;i<nums.size();i++){
            int ano = target-nums[i];
            if(mp.find(ano)!=mp.end()){
                return {mp[ano],i};
            }
            mp[nums[i]] = i;
        }
    return {};
    }
};