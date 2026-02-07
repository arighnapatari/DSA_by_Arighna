// Algorithm for bubble sort
// Take the max element and take it to the end by comparing adjacent elements and then swap if needed 
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for(int i = n-1; i >= 1; i--)
        {
            for(int j=0; j<= i-1; j++)
            {
                if(nums[j] > nums[j+1])
                {
                    swap(nums[j], nums[j+1]);
                }
            }
        }

        return nums;
    }
};
