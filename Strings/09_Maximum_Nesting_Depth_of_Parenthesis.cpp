/*Given a valid parentheses string s, return the nesting depth of s. The nesting depth is the maximum number of nested parentheses.
Example 1:
Input: s = "(1+(2*3)+((8)/4))+1"
Output: 3
Explanation:
Digit 8 is inside of 3 nested parentheses in the string.*/

class Solution {
public:
    int maxDepth(string s) {
        int openBrackets = 0;
        int result = 0;

        for(int i=0; i<s.size(); i++)
        {   
            char ch = s[i];
            if(ch == '(') openBrackets++;
            else if(ch == ')') openBrackets--;
            result = max(result, openBrackets);
        }
        return result;
    }
};

