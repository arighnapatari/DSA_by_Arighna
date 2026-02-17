/*Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.

Example 1:

Input: nums = [1,1,2]
Output:
[[1,1,2],
 [1,2,1],
 [2,1,1]]*/
class Solution {
public:
    void solve(vector<int>& nums, vector<int>& curr, vector<vector<int>>& result, vector<bool>& visited)
    {
        if(curr.size() == nums.size()){
            result.push_back(curr);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(visited[i]) continue;

            if(i > 0 && nums[i] == nums[i-1] && !visited[i-1]) continue;

            visited[i] = true;
            curr.push_back(nums[i]);

            solve(nums, curr, result, visited);

            curr.pop_back();
            visited[i] = false;
        }

    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> curr;
        vector<bool> visited(nums.size(), false);
        solve(nums, curr, result, visited);
        return result;

    }
};
