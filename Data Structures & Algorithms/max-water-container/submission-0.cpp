class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxi=0;
        int left=0,right=heights.size()-1;
        while(left<right){
            maxi=max(maxi,(right-left)*min(heights[left],heights[right]));
            if(heights[left]<heights[right]) left++;
            else right--;
        }        
        return maxi;
    }
};
