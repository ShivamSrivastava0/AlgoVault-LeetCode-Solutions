class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }

        int n = nums.size()/2;

        return (nums.size()%2==0) ? mp[nums[n-1]]==1 : mp[nums[n]]==1;
    }
};