//Given a binary array nums, return the maximum number of consecutive 1's in the array
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int counter = 0;
        int maxi = 0;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                counter++;
                maxi = max(maxi, counter);
            }
            else
            {
                counter = 0;
            }

        }
        return maxi;
        
    }
};

 
