// Optimal Approach
// Skip leading spaces.
// Check the sign (+ or -).
// Read digits one by one.
// Stop when a non-digit character is found.
// Check overflow before adding each digit.

class Solution {
public:
    int myAtoi(string s) {

        int i = 0;
        int sign = 1;
        long long number = 0;

        // Skip leading spaces
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        // Check sign
        if (i < s.size() && (s[i] == '+' || s[i] == '-')) {

            if (s[i] == '-') {
                sign = -1;
            }

            i++;
        }

        // Read digits
        while (i < s.size() && isdigit(s[i])) {

            int digit = s[i] - '0';

            // Check overflow
            if (number > (INT_MAX - digit) / 10) {

                if (sign == 1)
                    return INT_MAX;
                else
                    return INT_MIN;
            }

            number = number * 10 + digit;

            i++;
        }

        return sign * number;
    }
};