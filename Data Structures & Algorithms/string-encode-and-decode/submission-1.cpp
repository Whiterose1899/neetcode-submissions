class Solution {
public:

    string encode(vector<string>& strs) {
        string temp;
        for(int i=0; i<strs.size(); i++){
            temp = temp + to_string(strs[i].size());
            temp = temp + '#';
            temp = temp + strs[i];
        }
        cout<<temp;
        return temp;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int index = 0;
        while(index<s.size()){
            int size = 0;
            while(s[index]!='#'){
                size = size*10 + (s[index]-'0');
                index++;
            }
            index++;
            result.push_back(s.substr(index,size));
            index+=size;
        }
        return result;
    }
};
