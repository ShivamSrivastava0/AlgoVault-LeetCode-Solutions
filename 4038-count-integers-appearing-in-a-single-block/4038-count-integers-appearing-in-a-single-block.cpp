class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(auto x :nums)
            mp[x]++;

        int l=1;
        int c=0;
        for(int i=1;i<=nums.size();i++){
            if(i<nums.size() && nums[i]==nums[i-1]){
                l++;
            }
            else{
                if(l==mp[nums[i-1]])
                    c++;
                l=1;
            }
        }
    return c;
    }
};