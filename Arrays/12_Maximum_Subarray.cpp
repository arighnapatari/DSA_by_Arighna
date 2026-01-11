//Given an integer array nums, find the subarray with the largest sum, and return its sum.
//Approach --> Kadane's Algorithm.
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = nums[0];
        int sum = nums[0];

        for(int i=1; i<nums.size(); i++)
        {
            sum = max(nums[i], sum + nums[i]);
            maxi = max(maxi, sum);

        }
        return maxi;
        
        
    }
};
