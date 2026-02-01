/*Given a string s, return the longest palindromic substring in s.

 Example 1:

Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.
Example 2:

Input: s = "cbbd"
Output: "bb"*/
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        
        if(n <= 1) return s;

        int start = 0, maxLen = 1;
        for(int i=0; i<n; i++)
        {
            int len1 = expand(s, i, i);
            int len2 = expand(s, i, i+1);
            int len = max(len1, len2);

            if(len > maxLen)
            {
                maxLen = len;
                start = i - (len - 1) / 2;   // formula for both odd and even string palindrome

            }
        }
        return s.substr(start, maxLen);
    }
private:
    int expand(string &s, int l, int r)  // this function is to expand iteration from the center of the string one to left and one to right to check whether the string is palindrome and upto which index it is 
    {
        while(l >= 0 && r <= s.size() && s[l] == s[r])
        {
            l--;
            r++;
        }
        return r - l - 1;  // since the iteration ends at one point before the valid palindrome
    }
};
