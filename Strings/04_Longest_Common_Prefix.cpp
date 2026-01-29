/*Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"*/
// Approach --> Sort the array and then just check the first and last element and print only the common elements
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";

        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs[strs.size()-1];

        string ans = "";
        int minlength = min(first.size(), last.size());

        for(int i=0; i<minlength; i++)
        {
            if(first[i] != last[i]) break;
            ans += first[i];

        }
        return ans;
    }
};
