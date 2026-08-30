class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mpp;
        for(int i=0; i<nums.size(); i++){
            int temp = target - nums[i];
            if(mpp.find(temp)!=mpp.end()){
                return {mpp[temp],i+1};
            }
            mpp[nums[i]]=i+1;
        }
        return {-1,-1};
    }
};
