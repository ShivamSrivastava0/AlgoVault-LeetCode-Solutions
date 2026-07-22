class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;
        int c=0;
        for(auto i:deck){
            mp[i]++;
        }
        for(auto i:mp){
            c= gcd(i.second, c);
        }
    return c>1;
    }
};