class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        set<int> st(nums.begin(),nums.end());
        int low=0,c=st.size();
        int ans=0;
        unordered_map<int, int> mp;

        for(int high=0;high<n;high++){
            mp[nums[high]]++;
            while(mp.size()==c){
                ans += n-high;
                mp[nums[low]]--;
                if(mp[nums[low]]==0)
                    mp.erase(nums[low]);
                low++;
            }
        }
    return ans;
    }
};