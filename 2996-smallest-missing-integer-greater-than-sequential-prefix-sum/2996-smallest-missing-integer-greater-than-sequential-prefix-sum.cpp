class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> st;
        for(auto x: nums){
            st.insert(x);
        }

        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i-1]+1==nums[i])
                sum += nums[i];
            else break;
        }

        while(st.find(sum)!=st.end()){
            sum++;
        }
    return sum;
    }
};