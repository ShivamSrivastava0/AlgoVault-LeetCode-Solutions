class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        int c= 0;

        for(int i=0;i<nums.size();i++){
            long long sum=0;
            int co=0;

            if(i>0){
                sum+=nums[i-1];
                co++;
            }
            if(i<nums.size()-1){
                sum+=nums[i+1];
                co++;
            }
            if(co==0 || (long long)nums[i]*co>=sum){
                c++;
            }
        }
    return c;
    }
};