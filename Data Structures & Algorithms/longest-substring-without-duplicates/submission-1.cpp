class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,bool> mpp;
        int n = s.size();
        if(n==0) return 0;
        int maxii = 0;
        int left = 0;
        int right = 1;
        mpp[s[0]] = true;
        while(left<right && right<n){
            if(mpp.find(s[right])==mpp.end()){
                maxii = max(maxii, right-left+1);
                mpp[s[right]] = true;
            }
            else if(mpp[s[right]]){
                while(left<right && mpp[s[right]]){
                    mpp.erase(s[left]);
                    left++;
                }
                maxii = max(maxii, right-left+1);
                mpp[s[right]] = true;
            }
            right++;
        }
        return maxii;
    }
};
