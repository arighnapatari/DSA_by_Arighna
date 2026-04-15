/*Given a rows x cols binary matrix filled with 0's and 1's, find the largest rectangle containing only 1's and return its area.

Example 1:
Input: matrix = [["1","0","1","0","0"],["1","0","1","1","1"],["1","1","1","1","1"],["1","0","0","1","0"]]
Output: 6
Explanation: The maximal rectangle is shown in the above picture.*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights){
        stack<int> st;
        int maxArea = 0;
        int n = heights.size();

        for(int i = 0; i < n; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int h = heights[st.top()];
                st.pop();
                int pse = st.empty() ? -1 : st.top();
                int width = i - pse - 1;
                maxArea = max(maxArea, h * width);

            }
            st.push(i);
        }
        while(!st.empty()){
            int h = heights[st.top()];
            st.pop();
            int pse = st.empty()? -1 : st.top();
            int width = n - pse - 1;
            maxArea = max(maxArea, h * width);
        }
        return maxArea;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty() || matrix[0].empty()) return 0;

        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> heights(m, 0);
        int ans = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (matrix[i][j] == '1') heights[j] += 1;
                else heights[j] = 0;
            }
            ans = max(ans, largestRectangleArea(heights));

        }
        return ans;
    }
};
