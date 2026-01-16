//Given an integer rowIndex, return the rowIndexth (0-indexed) row of the Pascal's triangle.
//In Pascal's triangle, each number is the sum of the two numbers directly above it.
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> row(rowIndex+1, 1);

        for(int i=0; i<rowIndex; i++)
        {
            for(int j=i; j>=1; j--)
            {
                row[j] = row[j-1] + row[j];
            }
        }
        return row;
    }
};
