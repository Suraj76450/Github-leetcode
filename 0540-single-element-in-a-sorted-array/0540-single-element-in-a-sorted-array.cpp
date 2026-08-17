// Optimal Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNonDuplicate(vector<int>& arr) {

        int n = arr.size();

        if (n == 1)
            return arr[0];

        if (arr[0] != arr[1])
            return arr[0];

        if (arr[n - 1] != arr[n - 2])
            return arr[n - 1];

        int low = 1;
        int high = n - 2;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // mid itself is the single element
            if (arr[mid] != arr[mid - 1] &&
                arr[mid] != arr[mid + 1]) {
                return arr[mid];
            }

            // We are on the left side
            if ((mid % 2 == 1 && arr[mid] == arr[mid - 1]) ||
                (mid % 2 == 0 && arr[mid] == arr[mid + 1])) {
                
                low = mid + 1;
            }

            // We are on the right side
            else {
                high = mid - 1;
            }
        }

        return -1;
    }
};