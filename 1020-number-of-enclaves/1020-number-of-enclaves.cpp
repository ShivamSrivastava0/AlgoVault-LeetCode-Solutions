class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<int, int>> q;
// jitna boundary wale h pehle unko queue me daalke unpr bfs chalao
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && (i==0 || j==0 || i==n-1 || j==m-1)){
                    q.push({i,j});
                    vis[i][j]=true;
                }
            }
        }

        int delrow[] = {-1,1,0,0};
        int delcol[] = {0,0,-1,1};

        while(!q.empty()){
            int r = q.front().first;
            int c= q.front().second;
            q.pop();

            for(int k=0;k<4;k++){
                int nrow= r+ delrow[k];
                int ncol= c+ delcol[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    q.push({nrow, ncol});
                    vis[nrow][ncol]=true;
                }
            }
        }

        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !vis[i][j])
                    c++;
            }
        }
    return c;
    }
};