#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void sortZeroOneTwo(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

int main() {
    vector<int> nums = {2, 0, 2, 1, 1, 0};

    Solution obj;
    obj.sortZeroOneTwo(nums);

    cout << "Sorted array: ";
    for (int x : nums) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}