//Given an integer array nums where every element appears three times except for one, which appears exactly once. Find the single element and return it.
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones = 0, twos = 0;

        for(int num : nums)
        {
            ones  = (ones ^ num) & ~twos;   // most important lines --> first take element appearing ones then take them to twos and if it appears again then remove it using ~ which means not operator 
            twos = (twos ^ num) & ~ones;

        }
        return ones;

    }
};
