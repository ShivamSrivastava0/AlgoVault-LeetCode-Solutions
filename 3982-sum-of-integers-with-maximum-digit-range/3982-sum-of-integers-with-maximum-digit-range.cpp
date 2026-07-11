class Solution {
public:
    int trav(int n){
        if(n==0)
            return 0;
        int mx=0, mn=INT_MAX;
        
        while(n>0){
            mx = max(mx,(n%10));
            mn = min(mn,(n%10));
            n/=10;
        }
    return mx-mn;
    }

    int maxDigitRange(vector<int>& nums) {
        int mx= -1;
        for(auto x : nums){
            mx = max(mx, trav(x));
        }

        int s =0;
        for(auto x: nums){
            if(trav(x)==mx)
                s +=x;
        }
    return s;
    }
};