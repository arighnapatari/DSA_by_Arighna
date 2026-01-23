/*You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
Return the single element that appears only once.
Your solution must run in O(log n) time and O(1) space.*/

//Approach --> apply the trick of odd and even index 
/* (even, odd) --> element is on right half , so eliminate the left half;
(odd, even) --> element is on left half, so eliminate the right half; */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        if(n==1) return nums[0];
        if(nums[0] != nums[1]) return nums[0];
        if(nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1;
        int high = n-2;

        while(low<=high)
        {
            int mid = low + (high-low)/2;
            if(nums[mid] != nums[mid-1] && nums[mid]!=nums[mid+1])
            {
                return nums[mid];
            }
            if((mid % 2 != 0 && nums[mid-1] == nums[mid]) || (mid % 2 == 0 && nums[mid] == nums[mid+1]))
            {
                low = mid+1;

            }
            else
            {
                high = mid-1;
            }
            
        }
        return -1;
        
    }
};
