class Solution {
public:
    
    bool isPal(string &s, int start, int end) {
        while( start < end) {
            if(s[start] != s[end]) return false;
            start++;
            end--;
        }
        return true;
    }
    
    string longestPalindrome(string s) {
        int n = s.size();
        int maxStart = 0, maxEnd = 0;
        for(int start = 0; start < n; start++) {
            for(int end = start; end < n; end++) {
                if(isPal(s, start, end) && maxEnd - maxStart < end - start) {
                    maxEnd = end;
                    maxStart = start;
                }
            }
        }
        return s.substr(maxStart, maxEnd - maxStart + 1);
    }
};