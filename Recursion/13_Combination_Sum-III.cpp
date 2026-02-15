/*Find all valid combinations of k numbers that sum up to n such that the following conditions are true:

Only numbers 1 through 9 are used.
Each number is used at most once.
Return a list of all possible valid combinations. The list must not contain the same combination twice, and the combinations may be returned in any order.

Example 1:

Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations*/

class Solution {
public:
    vector<vector<int>> result;
    void solve(int index, int k, int target, vector<int> &curr)
    {
        if(k == 0 && target == 0)
        {
            result.push_back(curr);
            return;

        }
        if(k == 0 || target < 0) return;

        for(int i=index; i<=9; i++)
        {
            curr.push_back(i);
            solve(i+1, k-1, target-i, curr);
            curr.pop_back();

        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> curr;
        solve(1, k, n, curr);
        return result;

    }
};
