#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largestElement(vector<int> &arr) {
        int largest = arr[0];

        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > largest) {
                largest = arr[i];
            }
        }

        return largest;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = obj.largestElement(arr);

    cout << "Largest element = " << ans << endl;

    return 0;
}