//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.
//Approach --> Hashing and prefix sum.
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        int sum = 0;
        int counter = 0;
        for(int i=0; i<nums.size(); i++)
        {
            sum+=nums[i];
            if(mp.find(sum-k) != mp.end())
            {
                counter += mp[sum-k];
            }
            mp[sum]++;
        }
        return counter;
    }
};
