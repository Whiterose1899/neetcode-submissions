class Solution {
private:
    int func(int index, int buy, vector<vector<int>>& dp, vector<int>& nums){
        if(index==nums.size()) return -1e8;
        if(dp[index][buy]!=-1) return dp[index][buy];
        if(buy==0){
            return dp[index][buy] = max(-nums[index]+func(index+1,!buy,dp,nums),func(index+1,buy,dp,nums));
        }
        return dp[index][buy] = max(nums[index], func(index+1, buy, dp, nums));
    }
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(n, vector<int>(2,-1));
        int result = func(0, 0, dp, nums);
        if(result==-1 || result==-1e8) return 0;
        return result;
    }
};
