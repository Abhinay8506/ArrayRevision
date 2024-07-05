class Solution {
public:
    /*int binarysearch(vector<int>& nums, int target,int start,int end){
        while(start<end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return -1;
    }*/
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>v;
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(mpp.find(target-nums[i])!=mpp.end() && mpp[target-nums[i]]!=i){
                   v.push_back(i);
                   v.push_back(mpp[target-nums[i]]);
                   break;
            }
        }
        return v;
    }
};
