/*Given an integer array nums and an integer k, split nums into k non-empty subarrays such that the largest sum of any subarray is minimized.
Return the minimized largest sum of the split.
A subarray is a contiguous part of the array.*/

// same as book allocation

class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while(low<high)
        {
            int mid = low + (high-low)/2;

            if(canSplit(nums, k, mid))
            {
                high = mid;
            }
            else low = mid+1;
        }
        return low;
        
    }
private:
    bool canSplit(vector<int> &nums, int k, int maxsum)
    {
        int subarrays = 1;
        int currentsum = 0;
        int n = nums.size();

        for(int i=0; i<n; i++)
        {
            if(currentsum + nums[i] > maxsum)
            {
                subarrays++;
                currentsum = nums[i];

                if(subarrays > k) return false;
            }else currentsum += nums[i]; 
        }
        return true;
    }
};
