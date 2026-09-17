class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_map<int, int> mp;
        int n= candyType.size();
        for(auto x : candyType){
            mp[x]++;
        }

        if(mp.size()>=n/2){
            return n/2;
        }
    return mp.size();
    }
};