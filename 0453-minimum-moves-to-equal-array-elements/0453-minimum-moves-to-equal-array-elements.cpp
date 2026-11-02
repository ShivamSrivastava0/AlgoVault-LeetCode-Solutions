class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=INT_MAX;
        for(auto x : nums){
            mn=min(x,mn);
        }
        int c=0;

        for(auto i : nums){
            c+=i-mn;
        }
    return c;    
    }
};