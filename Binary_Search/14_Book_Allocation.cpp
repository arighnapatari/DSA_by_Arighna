/*Given an array nums of n integers, where nums[i] represents the number of pages in the i-th book, and an integer m representing the number of students, allocate all the books to the students so that each student gets at least one book, each book is allocated to only one student, and the allocation is contiguous.
Allocate the books to m students in such a way that the maximum number of pages assigned to a student is minimized. If the allocation of books is not possible, return -1.*/

/*Input: nums = [12, 34, 67, 90], m=2
Output: 113
Explanation: The allocation of books will be 12, 34, 67 | 90. One student will get the first 3 books and the other will get the last one.*/

class Solution {
public:
    int countstudent(vector<int> &nums, pages)
    {
        int student = 1, pagesStudent = 0;
        int n = nums.size();
        for(int i=0; i<n-1; i++)
        {
            if(pagesStudent + nums[i] <= pages)
            {
                pagesStudent += nums[i];

            }
            else
            {
                student++;
                pagesStudent = nums[i];
            }
        }
        return student;
    }
    int findPages(vector<int> &nums, int m)  {
        if(m>n) return -1;
        
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end());

        while(low<=high)
        {
            int mid = low + (high-low) / 2;
            int students = countstudent(nums, mid);
            if(students > m)
            {
                low = mid+1;
            }
            else high = mid-1;
        }
        return low;
    }
};
