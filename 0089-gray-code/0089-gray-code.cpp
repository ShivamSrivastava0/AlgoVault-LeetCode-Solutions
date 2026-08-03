class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> ans;
        int t = 1<<n;
        for(int i=0;i<t;i++){
            int Rshift= i>>1;
            ans.push_back(i^Rshift);
        }
        return ans;
    }
};