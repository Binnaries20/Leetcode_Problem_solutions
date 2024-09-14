class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        
        for(int row=0; row<numRows; ++row)
        {
            vector<int>currentRow;
            int value = 1;

            for(int j=0; j<=row; ++j)
            {
                currentRow.push_back(value);
                value = value*(row - j)/(j+1);
            }
            triangle.push_back(currentRow);
        }
        return triangle;
    }
};