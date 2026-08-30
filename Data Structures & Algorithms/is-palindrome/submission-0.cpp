class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0; i<s.size(); i++){
            char temp = s[i];
            if(temp==' ') continue;
            if(temp>='0' && temp<='9') str+=temp;
            if(temp>='A' && temp<='Z') str+=tolower(temp);
            if(temp>='a' && temp<='z') str+= temp;
        }
        int left = 0;
        int right = str.size()-1;
        while(left<right){
            if(str[left]!=str[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
