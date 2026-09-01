class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s2.size()<s1.size()) return false;
        if(s2.size()==s1.size()){
            sort(s1.begin(),s1.end());
            sort(s2.begin(),s2.end());
            if(s1!=s2) return false;
            else return true;
        }
        unordered_map<char,bool> mpp;
        for(int i=0; i<s1.size(); i++){
            mpp[s1[i]] = true;
        }
        sort(s1.begin(),s1.end());
        for(int i=0; i<s2.size(); i++){
            if(mpp.find(s2[i])!=mpp.end() && i+s1.size()<s2.size()){
                string temp = s2.substr(i,s1.size());
                sort(temp.begin(),temp.end());
                if(temp==s1) return true;
            }
        }
        return false;
    }
};
