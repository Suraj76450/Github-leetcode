class Solution {
public:
    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for (int row = 1; row <= numRows; row++) {

            vector<int> tempList;

            long long ans1 = 1;
            tempList.push_back(ans1);

            for (int col = 1; col < row; col++) {

                ans1 = ans1 * (row - col);
                ans1 = ans1 / col;

                tempList.push_back(ans1);
            }

            ans.push_back(tempList);
        }

        return ans;
    }
};