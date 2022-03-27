//Daily leetcode problem
//https://leetcode.com/problems/the-k-weakest-rows-in-a-matrix/

class Solution {
public:
    
    int binsearch(vector<int> row,int len){
       int start=0,end=len-1,mid;
        while(start<end){
            mid=start+(end-start)/2;
            if(row[mid]==0)
                end=mid;
            else
                start=mid+1;
        }
        return start;
    }
    
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> sol;
        vector<int> ans;
        int n=mat.size();
        if(n==0)
            return ans;
        int len=mat[0].size();
        for(int i=0;i<n;i++){
            int cnt=len;
            if(mat[i][len-1]!=1)
                cnt=binsearch(mat[i],len);
            sol.push_back({cnt,i});
        }
        sort(sol.begin(),sol.end());
        for(int i=0;i<k;i++){
            ans.push_back(sol[i].second);
        }
        return ans;
        
    }
};
