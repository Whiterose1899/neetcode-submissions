class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int left = 0;
        int right = n-1;
        int result = 0;
        while(left<right){
            int temp = (right-left)*min(nums[left],nums[right]);
            result = max(result,temp);
            if(nums[left]==nums[right]) left++;
            else if(nums[left]>nums[right]) right--;
            else if(nums[left]<nums[right]) left++;
        }
        return result;
    }
};
