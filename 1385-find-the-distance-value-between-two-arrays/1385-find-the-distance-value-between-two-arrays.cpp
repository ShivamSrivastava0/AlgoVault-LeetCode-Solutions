class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int c=0;
        for(auto x : arr1){
            int p=0;
            for(auto u : arr2){
                if(abs(x-u)>d)
                    p++;
            }
            if(p==arr2.size())
                c++;
        }
    return c;
    }
};