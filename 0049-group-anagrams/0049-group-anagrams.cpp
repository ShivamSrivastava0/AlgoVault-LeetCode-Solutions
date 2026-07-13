class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
        vector<vector<string>> ans;
        for(auto x : strs){
            string w = x;
            sort(w.begin(),w.end());
            map[w].push_back(x);
        }

        for(auto nei : map){
            ans.push_back(nei.second);
        }
        return ans;

    }
};