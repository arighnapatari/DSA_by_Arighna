//Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
//Approach --> Hashing.
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> mp;

        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            int num = nums[i];
            int extra = target - num;
            if(mp.find(extra) != mp.end())
            {
                return {mp[extra], i};
            }
            mp[num] = i;
        }
        return {-1,-1};
        
    }
};
