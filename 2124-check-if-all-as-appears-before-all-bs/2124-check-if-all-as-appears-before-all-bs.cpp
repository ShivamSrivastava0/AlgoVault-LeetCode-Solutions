class Solution {
public:
    bool checkString(string s) {
        // unordered_map<char, int> mp;

        // bool ds=true;
        // for(auto x : s){
        //     if(!ds && mp['b']!=0){
                
        //     }
        //     mp[x]++;
        //     ds=false;
        // } 
        string as = s;
        sort(as.begin(),as.end());
        return as==s;

    }
};