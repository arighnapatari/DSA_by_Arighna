/*Given a non-empty grid mat consisting of only 0s and 1s, where all the rows are sorted in ascending order, find the index of the row with the maximum number of ones.

If two rows have the same number of ones, consider the one with a smaller index. If no 1 exists in the matrix, return -1.


Example 1

Input : mat = [ [1, 1, 1], [0, 0, 1], [0, 0, 0] ]

Output: 0

Explanation: The row with the maximum number of ones is 0 (0 - indexed).*/

class Solution {
  public:   
  int rowWithMax1s(vector < vector < int >> & mat,int n, int m) {
    int cntMax = 0;
    int index = -1;
    for(int i = 0; i<n; i++)
    {
      int count_ones = m - lowerBound(matrix[i], m, 1);
      if(count_ones > cntMax)
      {
        cntMax = count_ones;
        index = i;

      }
      return index;
    }

  }
  private:
  int lowerBound(vector<int> &matrix, int n, int x)
  {
    int low = 0, high = n-1;
    int ans = n;
    while(low<=high)
    {
      int mid = low + (high-low) / 2;
      if(matrix[i] >= x)
      {
        ans = mid;
        high = mid-1;

      }
      else low = mid+1;

    }
    return ans;
  }
};
