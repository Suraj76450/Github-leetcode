#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = 0;
        int count = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
                count = 1;
            } else if (num == candidate) {
                count++;
            } else {
                count--;
            }
        }

        int frequency = 0;
        for (int num : nums) {
            if (num == candidate) {
                frequency++;
            }
        }

        if (frequency > nums.size() / 2) {
            return candidate;
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