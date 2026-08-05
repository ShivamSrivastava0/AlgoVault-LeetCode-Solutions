class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long mx = INT_MIN;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                long long l = gcd(nums[i],nums[j]);
                long long k = ((long long)nums[i]*nums[j])/((long long)l*l);

                mx=max(mx,k);
            }
        }
    return mx;
    }
};