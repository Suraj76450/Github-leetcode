#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st;

        for (int i = 0; i < n; i++) {
            st.insert(nums[i]);
        }

        int index = 0;
        for (auto it : st) {
            nums[index] = it;
            index++;
        }

        return st.size();
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};

    int k = obj.removeDuplicates(nums);

    cout << "Number of unique elements: " << k << endl;

    cout << "Array after removing duplicates: ";

    for (int i = 0; i < k; i++) {
        cout << nums[i] << " ";
    }

    cout << endl;

    return 0;
}