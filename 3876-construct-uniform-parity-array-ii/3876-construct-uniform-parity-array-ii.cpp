class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n= nums1.size();
        int odd=0,ev=0;
        for(auto x :nums1){
            if(x%2==0)
                ev++;
            else
                odd++;
        }

        if(ev==n || odd==n){
            return true;
        }

        int mnodd=INT_MAX;
        for(auto x :nums1){
            if(x%2!=0){
                mnodd = min(mnodd, x);
            }
        }

        for(auto i:nums1){
            if(i%2==0 && i-mnodd<1){
                return false;
            }
        }
    return true;
    }
};