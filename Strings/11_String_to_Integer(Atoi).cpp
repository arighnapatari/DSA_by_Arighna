//Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer.
/*Example 1:

Input: s = "42"

Output: 42

Explanation:

The underlined characters are what is read in and the caret is the current reader position.
Step 1: "42" (no characters read because there is no leading whitespace)
         ^
Step 2: "42" (no characters read because there is neither a '-' nor '+')
         ^
Step 3: "42" ("42" is read in)*/

  class Solution {
public:
    int myAtoi(string s) {
        int i =0, n = s.size();
        long long num = 0;
        int sign = 1;

        while(i < n && s[i] == ' ') i++;

        if(i < n && (s[i] == '+' || s[i] == '-'))    // taking care of the signs
        {
            if(s[i] == '-') sign = -1;
                i++;
        }
        
        while(i<n && isdigit(s[i]))     // isdigit is used to check whether a given input element is integer or not
        {
            num = num * 10 + (s[i] - '0');   // creating the whole number by adding one by one digit

            if(sign == 1 && num > INT_MAX) return INT_MAX;    // what if the user inputs a no which is max than the max integer allowed in cpp or min than the min integer allowed by cpp
            if(sign == -1 && -num < INT_MIN) return INT_MIN;
            i++; 
        }
        return sign * num;

    }
};
