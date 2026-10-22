class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n=grid.size();
        int m= grid[0].size();

        vector<vector<bool>> vis(n, vector<bool>(m, false));
        queue<pair<pair<int, int>, int>> q;
        int cfresh=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=true;
                }
                if(grid[i][j]==1)
                    cfresh++;
            }
        }

        int delrow[] = {-1,1,0,0};
        int delcol[] = {0,0,-1,1};
        int tm=0, cn=0;
        while(!q.empty()){
            int r = q.front().first.first;
            int c= q.front().first.second;
            int t=q.front().second;
            q.pop();
            tm=max(tm, t);
            for(int k=0;k<4;k++){
                int nrow= r+ delrow[k];
                int ncol= c+ delcol[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                    q.push({{nrow,ncol}, t+1});
                    vis[nrow][ncol]=2;
                    cn++;
                }
            }   
        }
        if(cn!=cfresh) return -1;
    return tm;
    }
};