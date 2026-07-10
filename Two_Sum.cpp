#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                if (i == j) {
                    continue;
                }

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};

int main() {

    Solution obj;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int target;
    cout << "Enter the target: ";
    cin >> target;

    vector<int> ans = obj.twoSum(nums, target);

    if (ans.empty()) {
        cout << "No two elements found whose sum is " << target << endl;
    } else {
        cout << "Indices are: " << ans[0] << " " << ans[1] << endl;
        cout << "Values are: " << nums[ans[0]] << " " << nums[ans[1]] << endl;
    }

    return 0;
}
