/*Given an array nums of size n, which denotes the positions of stalls, and an integer k, which denotes the number of aggressive cows, assign stalls to k cows such that the minimum distance between any two cows is the maximum possible. Find the maximum possible minimum distance.*/

class Solution {
public:
    int aggressiveCows(vector<int> &nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int low = 1, high = nums[n-1] - nums[0];

        while(low<=high)
        {
            int mid = low + (high-low) / 2;

            if(canweplace(nums, mid,  k) == true)
            {
                low = mmid+1;
            }
            else high = mid-1;
        }
        return high;
    }
private:
    bool canweplace(vector<int> &nums, int dist, int cows)
    {
        int cnt = 1, last = nums[0];
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i] - last >= dist)
            {
                cnt++;
                last = nums[i];
            }
            if(cnt >= cows) return true;
        }
        return false;
    }
};
