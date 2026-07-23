class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        if(nums.size()<3){
            return nums.size();
        }
        int x=1;
        while(x<=nums.size()){
            x=x<<1;
        }
    return x;
    }
};