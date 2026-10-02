// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {

//         int ans = 0;

//         for (int i = 0; i < nums.size(); i++) {

//             int sum = 0;

//             for (int j = i; j < nums.size(); j++) {

//                 sum += nums[j];

//                 if (sum == k)
//                     ans++;
//             }
//         }

//         return ans;
//     }
// };




class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int, int> mapu;

        mapu[0] = 1;

        int sum = 0;
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {

            sum += nums[i];

            if (mapu.find(sum - k) != mapu.end()) {
                ans += mapu[sum - k];
            }

            mapu[sum]++;
        }

        return ans;
    }
};