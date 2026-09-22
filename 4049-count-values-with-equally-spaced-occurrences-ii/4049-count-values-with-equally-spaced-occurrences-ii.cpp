class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        unordered_map<int, vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }    
        int co=0;
        for(auto x: mp){
            vector<int> as = x.second;
            if(as.size()>=3){
                int diff = as[1]-as[0];
                int c=0;
                for(int i=2;i<as.size();i++){
                    if(as[i]-as[i-1]==diff){
                        c++;
                    }
                    else
                        break;
                }
                if(c+2==as.size())
                    co++;
            }
        }
    return co;
    }
};