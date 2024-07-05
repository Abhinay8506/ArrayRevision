class Solution {
public:
    int findMin(vector<int>& nums) {
     int n=nums.size();
     if(n==1){
        return nums[0];
     }
     if(nums[0]<nums[n-1]){
        return nums[0];
     }
     
     
        /*for(int i=0;i<n;i++){
            if(nums[i]>nums[i+1]){
                return nums[i+1];
            }
        }*/

       int l=0;
       int h=nums.size()-1;
       while(l<=h){
           int mid=l+(h-l)/2;
           if(nums[mid]>nums[nums.size()-1]){
               l=mid+1;
           }
           else{
               h=mid-1;
           }
       }
       return nums[l];
     
    }
};
