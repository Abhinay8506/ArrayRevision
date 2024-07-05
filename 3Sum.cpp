class Solution {
public:
   /* vector<vector<int>> twoSum(vector<int>& nums, int target,int s) {
        vector<vector<int>>v;
        int n=nums.size();
        map<int,int>mpp;
        for(int i=s;i<n;i++){
            mpp[nums[i]]=i;
        }
        for(int i=s;i<n;i++){
            vector<int>temp;
            if(mpp.find(target-nums[i])!=mpp.end() && mpp[target-nums[i]]!=i){
                   temp.push_back(nums[i]);
                   temp.push_back(target-nums[i]);
                   v.push_back(temp);    
            }
        }
        return v;
    }*/
    vector<vector<int>> threeSum(vector<int>& nums) {
       /* vector<vector<int>>v;
        set<vector<int>>st;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            vector<vector<int>>res=twoSum(nums,0-nums[i],i+1);
            if(res.size()!=0){
                for(int j=0;j<res.size();j++){
                    res[j].push_back(nums[i]);
                    st.insert(res[j]);
                }
            }
        }
        for(auto it:st ){
            v.push_back(it);
        }
        return v;*/
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set<vector<int>> set;
        vector<vector<int>> output;
        for(int i=0; i<n-2; i++){
            int low = i+1, high = n-1;
            while(low < high){
                if(nums[i] + nums[low] + nums[high] < 0){
                    low++;
                }
                else if(nums[i] + nums[low] + nums[high] > 0){
                    high--;
                }
                else{
                    set.insert({nums[i], nums[low], nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto it : set){
            output.push_back(it);
        }
        return output;



    }
};
