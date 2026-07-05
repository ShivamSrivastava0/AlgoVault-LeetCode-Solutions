class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();

        vector<vector<int>> ans(m, vector<int>(n, -1));
        queue<pair<int, int>> q;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    ans[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
    vector<vector<int>> directions = {{0,1},{0,-1},{1,0},{-1,0}};
       
        while(!q.empty()){
            pair<int, int> temp = q.front();
            q.pop();

            int i= temp.first;
            int j= temp.second;

            for(auto &dir : directions){
                int updt_i = i+ dir[0];
                int updt_j = j+ dir[1];

                if(updt_i>=0 && updt_i<m && updt_j>=0 && updt_j<n && ans[updt_i][updt_j]==-1 ) {
                    
                    ans[updt_i][updt_j] = ans[i][j] + 1;
                    q.push({updt_i,updt_j});
                }
            }
        }
    return ans;
    }
};