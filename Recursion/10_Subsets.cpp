/*Given an integer array nums of unique elements, return all possible subsets (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]*/
class Solution {
public:
    void solve(int index, vector<int>& nums, vector<int>& curr, vector<vector<int>>& result)
    {
        result.push_back(curr);

        for(int i = index; i<nums.size(); i++)     // if you dont understand the loop method then go and first check the normal pick and not pick backtracking method
        {
            curr.push_back(nums[i]);
            solve(i+1, nums, curr, result);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;
        solve(0, nums, curr, result);
        return result;

    }
};
