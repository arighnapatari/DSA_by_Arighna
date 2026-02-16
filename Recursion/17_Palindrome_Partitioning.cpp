//Given a string s, partition s such that every substring of the partition is a palindrome. Return all possible palindrome partitioning of s.

/*Example 1:

Input: s = "aab"
Output: [["a","a","b"],["aa","b"]]*/

class Solution {
public:
    bool isPalindrome(string &s, int left, int right)
    {
        while(left < right)
        {
            if(s[left] != s[right])
            {
                return false;

            }
            else
            {
                left++;
                right--;
            }
        }
        return true;
    }
    void solve(int start, string& s, vector<string>& curr, vector<vector<string>>& result)
    {
        if(start == s.length())
        {
            result.push_back(curr);
            return;
        }
        for(int end = start; end<s.length(); end++)
        {
            if(isPalindrome(s, start, end))
            {
                curr.push_back(s.substr(start, end-start+1));
                solve(end+1, s, curr, result);
                curr.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> curr;
        solve(0, s, curr, result);
        return result;
    }
};
