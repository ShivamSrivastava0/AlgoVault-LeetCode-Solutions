class Solution {
public:
    int maximumLengthSubstring(string s) {
        int mx=0;
        unordered_map<char, int> mp;
        for(int i=0;i<s.length()-1;i++){
            mp[s[i]]++;
            int l=1;
            for(int j=i+1;j<s.length();j++){
                mp[s[j]]++;
                if(mp[s[j]]>2) break;
                l++;
                mx=max(mx,l);
            }
            mp.clear();
        }
    return mx;
    }
};