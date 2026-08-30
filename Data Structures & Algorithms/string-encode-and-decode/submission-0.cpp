class Solution {
public:

    string encode(vector<string>& strs) {
        string temp;
        for(int i=0; i<strs.size(); i++){
            temp = temp + to_string(strs[i].size());
            temp = temp + strs[i];
        }
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int index = 0;
        while(index<s.size()){
            int size = s[index]-'0';
            string temp = s.substr(index+1,size);
            result.push_back(temp);
            index += size+1;
        }
        return result;
    }
};
