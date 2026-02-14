//Given an integer array nums that may contain duplicates, return all possible subsets (the power set).
//The solution set must not contain duplicate subsets. Return the solution in any order.

class Solution {
public:
    void solve(int index, vector<int>& nums, vector<int>& curr, vector<vector<int>>& result)
    {
        result.push_back(curr);

        for(int i=index; i<nums.size(); i++)
        {
            if(i > index && nums[i] == nums[i-1]) continue;

            curr.push_back(nums[i]);
            solve(i+1, nums, curr, result);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> result;
        vector<int> curr;
        solve(0, nums, curr, result);
        return result;
    }
};
