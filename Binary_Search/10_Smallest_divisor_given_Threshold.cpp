/*Given an array of integers nums and an integer threshold, we will choose a positive integer divisor, divide all the array by it, and sum the division's result. Find the smallest divisor such that the result mentioned above is less than or equal to threshold.

Each result of the division is rounded to the nearest integer greater than or equal to that element. (For example: 7/3 = 3 and 10/2 = 5).*/

class Solution {
public:
    int sumofdiv(vector<int>& nums, int div)
    {
        int sum = 0, n = nums.size();
        for(int i = 0; i<n; i++)
        {
            sum += ceil((double) nums[i] / (double) div);
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end());

        while(low<= high)
        {
            int mid = low + (high-low) / 2;

            if(sumofdiv(nums, mid) <= threshold)
            {
                high = mid-1;
            }
            else low = mid+1;
            
        }
        return low;
    }
};
