class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        queue<pair<int, int>> q;
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && (i==n-1 || j==m-1 || i==0 || j==0)){
                vis[i][j]=true;
                q.push({i,j});
            }}
        }

        int delrow[]= {0,0,-1,1};
        int delcol[]= {-1,1,0,0};

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                int nrow=r+delrow[k];
                int ncol=c+delcol[k];

                if(nrow>=0 && nrow<n && ncol<m && ncol>=0 && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    vis[nrow][ncol]=true;
                    q.push({nrow,ncol});
                }
            }
        }

        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j]){
                    c++;
                }
            }
        }
    return c;
    }
};