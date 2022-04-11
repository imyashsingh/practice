// https://leetcode.com/problems/shift-2d-grid/
// Shift 2D Grid


class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int col=(j+k)%n;
                int t=(j+k)/n;
                int row=(i+t)%m;
                ans[row][col]=grid[i][j];
            }
        }
        return ans;
    }
};
