//Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.
//Approach --> Sum of n numbers
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int x = nums.size();
        int expectedSum = x * (x+1)/ 2;
        int sum = 0;
        for(int n : nums)
        {
            sum += n;
        }
        return expectedSum - sum;
        
    }
};
