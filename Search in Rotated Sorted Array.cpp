class Solution {
public:
    int binarysearch(vector<int>& nums, int low,int high,int target){
        int mid;
        while(low<=high){
            mid=low+(high-low)/2;
            if(nums[mid]==target)
            {
                return mid;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        
        return -1;
    }
    int pivotminindex(vector<int>& nums){
        int low=0;
        int high=nums.size()-1;
        
        int mid;
        while(low<=high){
           mid=low+(high-low)/2;
           if(nums[mid]>nums[nums.size()-1]){
              low=mid+1;
           }
           else{
               high=mid-1;
           }
           
        }
        return low;

    }
    int search(vector<int>& nums, int target) {
        int p=pivotminindex(nums);
        if(nums[p]<=target && target<=nums[nums.size()-1]){
            return binarysearch(nums,p,nums.size()-1,target);
        }
        else
        {  return binarysearch(nums,0,p-1,target);
        }
        return -1;
    }
};
