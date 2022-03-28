//https://leetcode.com/problems/search-in-rotated-sorted-array-ii/submissions/
//Search in Rotated Sorted Array II


    bool search(vector<int>& nums, int target) {
        int n=nums.size(),start=0;
        int end=n-1,mid;
        while(start<=end){
            mid=start+(end-start)/2;
            if(nums[mid]==target)
                return true;
            if(nums[start]==nums[mid]) start++;
            else if(nums[end]==nums[mid]) end--;
            else if(nums[start]<=nums[mid]){
                if(nums[start]<=target && nums[mid]>target) end=mid-1;
                else start=mid+1;
            }
            else{
                if(nums[mid]<target && nums[end]>=target) start=mid+1;
                else end=mid-1;
            }
                       
        }
        return false;
    }
