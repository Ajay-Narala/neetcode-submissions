class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int left=0,right=nums.size()-1;
        while(left<right){
            int total=nums[left]+nums[right];
            if(target==total) return {left+1,right+1};
            else if(target>total) left++;
            else right--;
    }      
        return {};
    }
};
