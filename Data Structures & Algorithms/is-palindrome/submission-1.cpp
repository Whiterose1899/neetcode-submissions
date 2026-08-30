class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;
        while(left<right){
            while(s[left]==' ' || (s[left]>'Z' || s[left]<'A') && (s[left]<'a' || s[left]>'z')
            && (s[left]>'9' || s[left]<'0')){
                left++;
            }
            while(s[right]==' ' || (s[right]>'Z' || s[right]<'A') && (s[right]<'a' || s[right]>'z')
            && (s[right]>'9' || s[right]<'0')){
                right--;
            }
            cout<<left<<" "<<right<<'\n';
            if(tolower(s[left])!=tolower(s[right])) return false;
            left++;
            right--;
        }
        return true;
    }
};
