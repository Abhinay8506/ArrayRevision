class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0;
        int n=prices.size();
        /*for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                profit=max(profit,prices[j]-prices[i]);
            }
        }*/
        vector<int>prefixmin(n);
        prefixmin[0]=prices[0];
        for(int i=1;i<n;i++){
            prefixmin[i]=min(prefixmin[i-1],prices[i]);
        }
        vector<int>postmax(n);
        postmax[n-1]=prices[n-1];
        for(int i=n-2;i>=0;i--){
            postmax[i]=max(postmax[i+1],prices[i]);
        }
        for(int i=0;i<n;i++){
            profit=max(profit,postmax[i]-prefixmin[i]);
        }
        return profit;
    }
};
