// class Solution {
// public:
//     int longestConsecutive(vector<int>& nums) {

//         unordered_set<int> s;

//         for (int i = 0; i < nums.size(); i++) {
//             s.insert(nums[i]);
//         }

//         int ans = 0 ;

//         for (int i = 0; i < nums.size(); i++) {

//             int x = nums[i];

//             // x is the starting point
//             if (s.find(x - 1) == s.end()) {

//                 int count = 1;

//                 while (s.find(x + count) != s.end()) {
//                     count++;
//                 }

//                 ans = max(ans, count);
//             }
//         }

//         return ans;
//     }
// };



class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
          sort(nums.begin(), nums.end());

        if (nums.size() == 0)
            return 0;

        // sort(nums.begin(), nums.end());

        int count = 1;
        int ans = 1;

        for (int i = 0; i < nums.size(); i++) {

            if (i == 0)
                continue;

            if (nums[i] == nums[i - 1])
                continue;

            if (nums[i] == nums[i - 1] + 1)
                count++;
            else
                count = 1;

            ans = max(ans, count);
        }

        return ans;
    }
};