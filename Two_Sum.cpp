#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        seen.reserve(nums.size());

        for (int i = 0; i < static_cast<int>(nums.size()); i++) {
            int complement = target - nums[i];
            auto it = seen.find(complement);
            if (it != seen.end()) {
                return {it->second, i};
            }
            seen[nums[i]] = i;
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