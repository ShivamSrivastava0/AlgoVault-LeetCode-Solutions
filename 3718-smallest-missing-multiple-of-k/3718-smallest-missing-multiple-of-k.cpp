class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        for(auto x : nums){
            mp[x]++;
        }
        int z=k;
        while(true){
            if(mp.find(k)==mp.end()){
                return k;
            }
            k+=z;
        }
        return z;
    }
};