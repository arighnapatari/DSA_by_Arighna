//Given an array nums of size n, return the majority element
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
//Approach --> Moore's voting algorithm.
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = 0;
        int count = 0;

        for (int x : nums) {
            if (count == 0) {
                element = x;
            }

            if (x == element)
                count++;
            else
                count--;
        }

        return element;
    }
};
