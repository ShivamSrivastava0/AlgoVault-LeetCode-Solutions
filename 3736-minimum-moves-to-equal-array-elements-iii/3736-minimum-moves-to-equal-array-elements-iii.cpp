class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mx=INT_MIN;
        for(auto x :nums){
            mx=max(x,mx);
        }
        int c=0;
        for(auto x:nums){
            c+=mx-x;
        }
    return c;
    }
};