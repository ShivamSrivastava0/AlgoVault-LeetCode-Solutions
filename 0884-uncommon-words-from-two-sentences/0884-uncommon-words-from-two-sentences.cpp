class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        stringstream ss(s1);
        stringstream ss2(s2);
        string w1;
        string w2;

        unordered_map<string, int> mp;

        while(ss >> w1){
            mp[w1]++;
        }
        
        while(ss2 >> w2){
            mp[w2]++;
        }
        vector<string> ans;
        for(auto x : mp){
            if(x.second==1)
                ans.push_back(x.first);
        }
    return ans;
    }
};