class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        int x1=start[0];
        int y1=start[1];
        int x2=target[0];
        int y2=target[1];
        int dis = abs(x2-x1) + abs(y2-y1); 
    return dis%2==0;
    }
};