class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, int> mp;
        map<char, int> mp1;

        for(int i=0; i<s.length(); i++){
            if(mp[s[i]] != mp1[t[i]]){
                return false;
            }

            mp[s[i]] = i+1;
            mp1[t[i]] = i+1;
        }

        return true;
    }
};