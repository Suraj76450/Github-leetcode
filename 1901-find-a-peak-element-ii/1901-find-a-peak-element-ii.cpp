// // Linear Search Approach
// // Time Complexity: O(m * n)
// // Space Complexity: O(1)

// class Solution {
// public:
//     vector<int> findPeakGrid(vector<vector<int>>& mat) {

//         int m = mat.size();
//         int n = mat[0].size();

//         for (int i = 0; i < m; i++) {

//             for (int j = 0; j < n; j++) {

//                 // Check top
//                 if (i > 0 && mat[i][j] <= mat[i - 1][j])
//                     continue;

//                 // Check bottom
//                 if (i < m - 1 && mat[i][j] <= mat[i + 1][j])
//                     continue;

//                 // Check left
//                 if (j > 0 && mat[i][j] <= mat[i][j - 1])
//                     continue;

//                 // Check right
//                 if (j < n - 1 && mat[i][j] <= mat[i][j + 1])
//                     continue;

//                 return {i, j};
//             }
//         }

//         return {-1, -1};
//     }
// };

// Binary Search Approach
// Time Complexity: O(m * log n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();
        int n = mat[0].size();

        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Find maximum element in the middle column
            int row = 0;

            for (int i = 1; i < m; i++) {
                if (mat[i][mid] > mat[row][mid]) {
                    row = i;
                }
            }

            // Check left and right neighbors
            int left = -1;
            int right = -1;

            if (mid > 0) {
                left = mat[row][mid - 1];
            }

            if (mid < n - 1) {
                right = mat[row][mid + 1];
            }

            // Peak found
            if (mat[row][mid] > left &&
                mat[row][mid] > right) {

                return {row, mid};
            }

            // Move right
            if (right > mat[row][mid]) {
                low = mid + 1;
            }
            // Move left
            else {
                high = mid - 1;
            }
        }

        return {-1, -1};
    }
};