class Solution {
public:
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        string str="";
        vector<vector<string>> ans;

        for(auto x: searchWord){
            str+=x;
            vector<string> lvl;

            for(auto i : products){
                if(i.find(str)==0){
                    lvl.push_back(i);
                }

                if(lvl.size()==3) break;
            }
            ans.push_back(lvl);
        }
    return ans;
    }
};