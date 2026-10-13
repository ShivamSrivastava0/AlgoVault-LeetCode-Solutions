class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        // if(nums.size()==1)
        //     return nums[0]*nums[0];

        for(int i=0;i<nums.size();i++){
            nums[i] = nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        int j=nums.size()-1;
        int i=0;
        long long sum=0;
        while(i<j){
            sum+= nums[j]-nums[i];
            i++;
            j--;
        }
        if(i==j) sum+=nums[i];
    return sum;
    }
};