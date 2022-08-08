class Solution {
public:
    
    bool isPal(string &s, int start, int len) {
        int end = start + len - 1;
        while( start < end) {
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        for(int len = n; len > 1; len--) {
            for(int start = 0; start + len <= n; start++) {
                if(isPal(s, start, len)) {
                    return s.substr(start, len);
                }
            }
        }
        return s.substr(0,1);
    }
};