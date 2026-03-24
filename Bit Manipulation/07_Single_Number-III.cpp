//Given an integer array nums, in which exactly two elements appear only once and all the other elements appear exactly twice. Find the two elements that appear only once. You can return the answer in any order.

/*You must write an algorithm that runs in linear runtime complexity and uses only constant extra space.

Example 1:

Input: nums = [1,2,1,3,2,5]
Output: [3,5]
Explanation:  [5, 3] is also a valid answer.*/

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unsigned int xorAll = 0;

        for(int num : nums)
        {
            xorAll  ^= static_cast<unsigned int>(num);

        }
        unsigned int diff = xorAll & (-xorAll);

        int a = 0, b = 0;
        for(int num : nums)
        {
            if(static_cast<unsigned int>(num) & diff) a ^= num;
            else b ^= num;

        }
        return {a,b};

    }
};
