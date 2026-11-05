class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};

        map<char,vector<char>> mp;
        mp['2'] = {'a','b','c'};
        mp['3'] = {'d','e','f'};
        mp['4'] = {'g','h','i'};
        mp['5'] = {'j','k','l'};
        mp['6'] = {'m','n','o'};
        mp['7'] = {'p','q','r','s'};
        mp['8'] = {'t','u','v'};
        mp['9'] = {'w','x','y','z'};

        vector<string> ans={""};
        for(int i=0;i<digits.size();i++){
            vector<string> op;

            for(auto x :ans){
                for(char c: mp[digits[i]]){
                    string str=x;
                    str+=c;
                    op.push_back(str);
                }
            }
            ans=op;
        }
    return ans;
    }
};