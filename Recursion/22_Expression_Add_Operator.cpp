/*Given a string num that contains only digits and an integer target, return all possibilities to insert the binary operators '+', '-', and/or '*' between the digits of num so that the resultant expression evaluates to the target value.
Note that operands in the returned expressions should not contain leading zeros.
Note that a number can contain multiple digits.

Example 1:
Input: num = "123", target = 6
Output: ["1*2*3","1+2+3"]
Explanation: Both "1*2*3" and "1+2+3" evaluate to 6.*/

class Solution {
public:
    vector<string> ans;
    void backtrack(string num, int target, int index, long value, long prev, string path)
    {
        if(index == num.size())
        {
            if(value == target)
            {
                ans.push_back(path);
            }
            return;
        }
        for(int i=index; i<num.size(); i++)
        {
            if(i > index && num[index] == '0')
                break;
            string currStr = num.substr(index, i-index+1);
            long curr = stol(currStr);

            if(index == 0)
            {

                backtrack(num, target, i + 1,
                          curr, curr,
                          currStr);
            }
            else
            {
                
                backtrack(num, target, i + 1,
                          value + curr, curr,
                          path + "+" + currStr);

                
                backtrack(num, target, i + 1,
                          value - curr, -curr,
                          path + "-" + currStr);


                backtrack(num, target, i + 1,
                          value - prev + prev * curr,
                          prev * curr,
                          path + "*" + currStr);
            }
        }
    }
    vector<string> addOperators(string num, int target) {
        backtrack(num, target, 0, 0, 0, "");
        return ans;
    }
};
