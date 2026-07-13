class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int, int>> dss;
        for(int i=0;i<capital.size();i++){
            dss.push_back({capital[i], profits[i]});
        }
        sort(dss.begin(),dss.end());

        priority_queue<int> pq;
        int idx=0;
        while(idx<capital.size() && dss[idx].first <= w){
            pq.push(dss[idx].second);
            idx++;
        }
        while(k-- && !pq.empty()){
            w += pq.top();
            pq.pop();

            while(idx<capital.size() && dss[idx].first <= w){
                pq.push(dss[idx].second);
                idx++;
            }
        }
    return w;
    }
};