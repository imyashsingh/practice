//https://leetcode.com/problems/search-a-2d-matrix/submissions/
//Search a 2D Matrix



    bool binsearch(vector<int> arr,int m,int target){
        int start=0,end=m-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(arr[mid]==target)
                return true;
            if(arr[mid]>target)
                end=mid-1;
            else
                start=mid+1;
        }
        return false;
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size(),m=matrix[0].size(),i=0;
        if(matrix[n-1][m-1]<target || matrix[0][0]>target)
            return false;
        for(;i<n;i++){
            if(target<=matrix[i][m-1]){
                break;
            }
        }
        return binsearch(matrix[i],m,target);
        
    }
