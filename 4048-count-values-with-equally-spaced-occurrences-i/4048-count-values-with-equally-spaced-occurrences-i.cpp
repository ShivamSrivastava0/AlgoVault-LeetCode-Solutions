class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        int c=0;
        for(auto &x : mp){
            vector<int> as = x.second;
            if(as.size()==3){
                if(as[1]-as[0]==as[2]-as[1]){
                    c++;
                }
            }
        }
    return c;
    }
};