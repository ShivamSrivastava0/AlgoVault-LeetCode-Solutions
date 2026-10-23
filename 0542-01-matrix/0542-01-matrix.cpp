class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m=mat[0].size();
        queue<pair<int, int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    q.push({i,j});
                }
                else
                    mat[i][j]=-1;
            }
        }

        int delrow[] = {-1,1,0,0};
        int delcol[] = {0,0,-1,1};
        
        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();

            for(int k=0;k<4;k++){
                int nrow = r + delrow[k];
                int ncol = c + delcol[k];
                
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && mat[nrow][ncol]==-1){
                    mat[nrow][ncol] = mat[r][c] +1;
                    q.push({nrow,ncol});
                }
            }        
        }
    return mat;
    }
};