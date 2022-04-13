// https://leetcode.com/problems/spiral-matrix-ii/
// Spiral Matrix II



class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int cols=0,rows=0,cole=n-1,rowe=n-1;
        int num=1;
        while(cols<=cole && rows<=rowe){
            for(int i=cols;i<=cole;i++)
                ans[rows][i]=num++;
            rows++;
            for(int i=rows;i<=rowe;i++)
                ans[i][cole]=num++;
            cole--;
            for(int i=cole;i>=cols;i--)
                ans[rowe][i]=num++;
            rowe--;
            for(int i=rowe;i>=rows;i--)
                ans[i][cols]=num++;
            cols++;
        }
        return ans;
        
    }
};
