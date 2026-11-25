class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m= image[0].size();

        int start=image[sr][sc];
        if(start==color)
            return image;
        queue<pair<int,int>> q;
        q.push({sr,sc});
        image[sr][sc]=color;

        int delrow[] = {0,0,-1,1};
        int delcol[] = {-1,1,0,0};

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();

            for(int k=0;k<4;k++){
                int nrow=r+delrow[k];
                int ncol=c+delcol[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==start){
                    image[nrow][ncol]=color;
                    q.push({nrow,ncol});
                }
            }
        }

  return image;
    }
};