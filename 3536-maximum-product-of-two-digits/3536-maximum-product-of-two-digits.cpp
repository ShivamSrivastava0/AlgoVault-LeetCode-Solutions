class Solution {
public:
    int maxProduct(int n) {
        vector<int> ans;
        while(n){
            ans.push_back(n%10);
            n/=10;
        }
        int l=ans.size();
        
        sort(ans.begin(), ans.end());
    return ans[l-1]*ans[l-2];
    }
};