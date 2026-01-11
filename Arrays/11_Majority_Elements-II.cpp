//Given an integer array of size n, find all elements that appear more than ⌊ n/3 ⌋ times.
//Approach --> Moore's voting algorithm.

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int element1 = 0, element2 = 0, count1 =0, count2 = 0;
        for(int num : nums)
        {
            if(element1 == num)
            {
                count1++;
            }
            else if(element2 == num)
            {
                count2++;
            }
            else if(count1 == 0)
            {
                element1 = num;
                count1 = 1;
            }
            else if(count2 == 0)
            {
                element2 = num;
                count2 = 1;
            }
            else
            {
                count1--;
                count2--;
            }
        }
        count1 = count2 = 0;

        for(int num : nums)
        {
            if(num == element1)
            {
                count1++;
            }
            else if(num == element2)
            {
                count2++;
            }
        }
        vector<int> result;
        int max  = nums.size()/3;

        if(count1 > max) result.push_back(element1);
        if(count2 > max) result.push_back(element2);

        return result;

        
    }
};

 
