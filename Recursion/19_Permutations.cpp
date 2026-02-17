/*Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]*/

class Solution {
public:
    void solve(vector<int>& nums, vector<int>& curr, vector<bool>& visited, vector<vector<int>>& result)
    {
        if(curr.size() == nums.size())
        {
            result.push_back(curr);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(visited[i]) continue;
            visited[i] = true;
            curr.push_back(nums[i]);

            solve(nums, curr, visited, result);
            curr.pop_back();
            visited[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> curr;
        vector<bool> visited(nums.size(), false);

        solve(nums, curr, visited, result);
        return result;
    }
};
