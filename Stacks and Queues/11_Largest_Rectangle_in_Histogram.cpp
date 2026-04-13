//Given an array of integers heights representing the histogram's bar height where the width of each bar is 1, return the area of the largest rectangle in the histogram.

/*Example 1:
Input: heights = [2,1,5,6,2,3]
Output: 10
Explanation: The above is a histogram where width of each bar is 1.
The largest rectangle is shown in the red area, which has an area = 10 units.*/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int maxArea = 0;

        for(int i = 0; i < heights.size(); i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int element = st.top(); st.pop();
                int nse = i;
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(heights[element] * (nse - pse - 1), maxArea);

            }
            st.push(i);
        }
        while(!st.empty()){
                int nse = heights.size();
                int element = st.top(); st.pop();
                int pse = st.empty() ? -1 : st.top();
                maxArea = max(maxArea, (nse - pse - 1) * heights[element]);
            }
        return maxArea;
    }
};
