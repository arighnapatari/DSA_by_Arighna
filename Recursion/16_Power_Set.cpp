/*Given an array of integers nums of unique elements. Return all possible subsets (power set) of the array.
Do not include the duplicates in the answer.
Example
Input : nums = [1, 2, 3]
Output : [ [ ] , [1] , [2] , [1, 2] , [3] , [1, 3] , [2, 3] , [1, 2 ,3] ]*/

class Solution {
public:	
    void solve(int index, vector<int>& nums, vector<int>& curr, vector<vector<int>& result)
    {
        result.push_back(curr);
        for(i = index; i<nums.size(); i++)
        {
            curr.push_back(nums[i]);
            solve(i + 1, nums, curr, result);
            curr.pop_back();
        }
    }
    vector<vector<int> > powerSet(vector<int>& nums) {
        vector<vector<int> result;
        vector<int> curr;
        solve(0, nums, curr, result);
        return result;

    }
};
