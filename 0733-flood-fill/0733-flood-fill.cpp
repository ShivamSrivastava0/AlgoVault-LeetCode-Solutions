class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m= image[0].size();
        int start= image[sr][sc];
        if(start==color)
            return image;

        queue<pair<int, int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;

        int delrow[] = {-1,1,0,0};
        int delcol[] = {0,0,-1,1};

        while(!q.empty()){  
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            for(int k=0;k<4;k++){
                int n_row=row + delrow[k];
                int n_col=col + delcol[k];
                if(n_row>=0 && n_row<n && n_col>=0 && n_col<m && image[n_row][n_col]==start){
                    image[n_row][n_col]=color;
                    q.push({n_row,n_col});
                }
            }
        }
    return image;
    }
};