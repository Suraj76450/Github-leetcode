// Approach: Optimal

class Solution {
public:
    // Function to return the integer value of a Roman numeral
    int value(char ch) {

        switch (ch) {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        }

        return 0;
    }

    int romanToInt(string s) {

        // Store the final answer
        int ans = 0;

        // Visit every character of the string
        for (int i = 0; i < s.size(); i++) {

            // Check whether the current value is smaller than the next value
            if (i + 1 < s.size() && value(s[i]) < value(s[i + 1])) {

                // Subtract the current value
                ans -= value(s[i]);

            } else {

                // Otherwise, add the current value
                ans += value(s[i]);
            }
        }

        return ans;
    }
};