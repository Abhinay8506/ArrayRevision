class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
       
        /*for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                ans=max(ans,sum);
            }
        }*/
        int maxi=nums[0];
        int sum=nums[0];
        for(int i=1;i<n;i++){
            if(sum+nums[i]<nums[i])
            {
                   sum=nums[i];
            }
            else{
                sum+=nums[i];
            }
            
            maxi=max(maxi,sum);
        }

        return maxi;

    }
};
