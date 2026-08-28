class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        for(int i=0; i<s.size(); i++){
            mpp1[s[i]]++;
        }
        for(int i=0; i<t.size(); i++){
            mpp2[t[i]]++;
        }
        if(mpp1.size()!=mpp2.size()) return false;
        for(auto it: mpp1){
            if(mpp2.find(it.first)==mpp2.end()) return false;
            if(mpp2[it.first]!=mpp1[it.first]) return false;
        }
        return true;
    }
};
