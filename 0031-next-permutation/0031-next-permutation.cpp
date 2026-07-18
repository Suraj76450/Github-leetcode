class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        // Step 1: Find the breakpoint (pivot)
        // Traverse from right to left and find the first index
        // where nums[i] < nums[i+1]
        int ind = -1;

        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                ind = i;
                break;
            }
        }

        // Step 2: If no breakpoint is found,
        // the array is in descending order.
        // Reverse it to get the smallest permutation.
        if (ind == -1) {
            reverse(nums.begin(), nums.end());
            return;
        }

        // Step 3: Find the first element from the right
        // that is greater than nums[ind]
        for (int i = nums.size() - 1; i > ind; i--) {
            if (nums[i] > nums[ind]) {
                swap(nums[i], nums[ind]);
                break;
            }
        }

        // Step 4: Reverse the elements after the breakpoint
        reverse(nums.begin() + ind + 1, nums.end());
    }
};