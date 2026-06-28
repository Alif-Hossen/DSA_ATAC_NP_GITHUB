class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int startRow = 0, startCol = 0, endRow = m-1, endCol = n-1;
        vector<int> ans;

        while(startRow <= endRow && startCol <= endCol) {
            //TOP ->
            for(int j=startCol; j<=endCol; j++) {
                ans.push_back(mat[startRow][j]);
            } 

            // RIGHT ->
            for(int i=startRow+1; i<=endRow; i++) {
                ans.push_back(mat[i][endCol]);
            }

            // BOTTOM ->
            for(int j=endCol-1; j>=startCol; j--) {
                // CORNER CASE ->
                if(startRow == endRow) {
                    break;
                }
                ans.push_back(mat[endRow][j]);
            }

            // LEFT ->
            for(int i=endRow-1; i>startRow; i--) {
                if(startCol == endCol) {
                    break;
                }
                ans.push_back(mat[i][startCol]);
            }
            startRow++, endRow--, startCol++, endCol--;

        }
        return ans;
    }

};