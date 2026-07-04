class Solution {
public:
    int maxArea(vector<int>& height) {
        int l =0,r=height.size()-1, mx=0;

        while(l<r){
            int length = min(height[l],height[r]);
            int width = r-l;
            int area = length*width;

            mx = max(mx, area);
            if(height[l]<height[r]){
                l++;
            }
            else r--;
        }   
    return mx;
    }
};