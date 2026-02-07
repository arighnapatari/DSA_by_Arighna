// Algorithm for selection sort
//approach --> select the minimum no of the arrqy then swap it with the first index go on with the remaining array it will be sorted 

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int n = nums.size();

        for(int i=0; i<n-1; i++)
        {
            int mini = i;

            for(int j=i+1; j<n; j++)
            {
                if(nums[j] < nums[mini])
                {
                    mini = j;
                }
            }
            if(mini != i)
            {
                swap(nums[i], nums[mini]);
            }
        }
        return nums;
    }
};
