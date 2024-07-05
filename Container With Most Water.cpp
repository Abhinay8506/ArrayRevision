class Solution {
public:
    int maxArea(vector<int>& heights) {
        int i=0;
        int n=heights.size();
        int j=n-1;
        int area=0;
        while(i<j){
            area=max(area,min(heights[i],heights[j])*(j-i));
            if(heights[i]>heights[j]){
                j--;
            }
            else i++;
        }
        return area;

    }
};
