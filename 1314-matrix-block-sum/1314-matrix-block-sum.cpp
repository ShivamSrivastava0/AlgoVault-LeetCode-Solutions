class Solution {
public:
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<vector<int>> prfx = prefixSum(mat);
        vector<vector<int>> ans(m, vector<int>(n));

        for(int i=0;i<m; i++){
            for (int j=0; j<n; j++){
                int r1 = max(0, i-k);
                int c1 = max(0, j-k);
                int r2 = min(m-1, i+k);
                int c2 = min(n-1, j+k);

                int sum = prfx[r2][c2];

                if(r1 >0)
                    sum-=prfx[r1 - 1][c2];
                if(c1)
                    sum -= prfx[r2][c1 - 1];
                if(r1>0 && c1>0)
                    sum+=prfx[r1 - 1][c1 - 1];

                ans[i][j] = sum;
            }
        }
    return ans;
    }

    vector<vector<int>> prefixSum(vector<vector<int>>& mat){
        vector<vector<int>> arr = mat;

        for(int i=0;i<mat.size();i++){
            int sum=0;
            for(int j=0;j<mat[0].size();j++){
                sum+= mat[i][j];
                if(i>0)
                    arr[i][j] = sum + arr[i-1][j];
                else
                    arr[i][j]=sum;
            }
        }
    return arr;
    }
};