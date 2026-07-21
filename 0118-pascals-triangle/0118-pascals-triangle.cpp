class Solution {
public:
    // Function to calculate nCr
    int nCr(int n, int r) {
        long long res = 1;

        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }

        return res;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        // Traverse each row
        for (int row = 1; row <= numRows; row++) {

            vector<int> tempList;

            // Traverse each column of the current row
            for (int col = 1; col <= row; col++) {

                tempList.push_back(nCr(row - 1, col - 1));

            }

            ans.push_back(tempList);
        }

        return ans;
    }
};