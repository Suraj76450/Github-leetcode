#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            int count = 0;

            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    count++;
                }
            }

            if (count > n / 2) {
                return nums[i];
            }
        }

        return -1;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    int ans = obj.majorityElement(nums);

    cout << "Majority Element = " << ans << endl;

    return 0;
}