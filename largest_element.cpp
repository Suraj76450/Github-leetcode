#include <iostream>
#include <vector>
#include <algorithm>   // For sort()
using namespace std;

// BRUTE FORCE METHOD
class Solution {
public:
    int largestElement(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        return nums[nums.size() - 1];
    }
};

int main() {

    Solution obj;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int ans = obj.largestElement(nums);

    cout << "Largest element = " << ans << endl;

    return 0;
}