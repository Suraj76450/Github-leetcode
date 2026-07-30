// // Optimal Approach

// class Solution {
// public:
//     int maxDepth(string s) {

//         // Store the current depth of parentheses
//         int depth = 0;

//         // Store the maximum depth found
//         int maxDepth = 0;

//         // Traverse the string
//         for (int i = 0; i < s.size(); i++) {

//             // If an opening parenthesis is found
//             if (s[i] == '(') {

//                 // Increase the current depth
//                 depth++;

//                 // Update the maximum depth
//                 maxDepth = max(maxDepth, depth);
//             }

//             // If a closing parenthesis is found
//             else if (s[i] == ')') {

//                 // Decrease the current depth
//                 depth--;
//             }
//         }

//         // Return the maximum depth of parentheses
//         return maxDepth;
//     }
// };

class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int count = 0;
        int maxCount = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                count++;
                maxCount = max(count, maxCount);
            }else if(s[i] == ')'){
                count--;
            }
        }
        return maxCount;
    }
};