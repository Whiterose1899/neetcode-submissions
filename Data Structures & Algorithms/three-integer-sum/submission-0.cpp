class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        for(int i=0; i<nums.size(); i++){
            if(i!=0 && nums[i]==nums[i-1]) continue;
            int left = i+1; 
            int right = nums.size()-1;
            while(left<right){
                int sum = nums[left]+nums[right]+nums[i];
                if(sum==0){
                    result.push_back({nums[i],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<n && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(right>=0 && nums[right]==nums[right+1]){
                        right--;
                    }
                }
                else if(sum<0){
                    left++;
                }
                else if(sum>0){
                    right--;
                }
            }
        }   
        return result;
    }
};
