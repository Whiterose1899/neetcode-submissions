class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int maxii = 0;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                maxii = max(nums[j]-nums[i], maxii);
            }
        }
        return maxii;
    }
};
