#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums, int k) {
        int left = 0, right = 0;
        long long sum = nums[0];
        int maxLen = 0;
        int n = nums.size();

        while (right < n) {

            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }

            if (sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }

            right++;

            if (right < n) {
                sum += nums[right];
            }
        }

        return maxLen;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {10, 5, 2, 7, 1, 9};
    int k = 15;

    int ans = obj.longestSubarray(nums, k);

    cout << "Longest Subarray Length = " << ans << endl;

    return 0;
}