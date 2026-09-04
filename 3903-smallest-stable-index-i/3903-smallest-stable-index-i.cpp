class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> pr(nums.size()), sf(nums.size());
        pr[0]=nums[0];
        for(int i=1;i<nums.size();i++){
            pr[i] = max(pr[i-1],nums[i]);
        }   
        sf[nums.size()-1]=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;i--){
            sf[i] = min(sf[i+1],nums[i]);
        }

        for(int i=0;i<nums.size();i++){
            if(pr[i]-sf[i]<=k) return i;
        }
    return -1;
    }
};