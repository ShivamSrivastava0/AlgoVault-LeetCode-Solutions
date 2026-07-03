class Solution {
public:
    int mod = 1e9+7;
    int rev(int n){
        int r =0;
        while(n>0){
            r = r*10 + (n%10);
            n/=10;
        }
        return r;
    }

    int countNicePairs(vector<int>& nums) {
        long long c=0;
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            int key = nums[i]-rev(nums[i]);
            c+= mp[key];
            mp[key]++;
        }
    return c%mod;
    }
};