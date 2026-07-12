class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> l = arr;
        // sort(l.begin(),l.end());
        set<int> st(arr.begin(),arr.end());
        unordered_map<int, int> mp;
        int i=0;
        for(auto x : st){
            mp[x] = i+1;
            i++;
        }

        for(int i=0;i<arr.size();i++){
            l[i] = mp[arr[i]];
        }
    return l;
    }
};