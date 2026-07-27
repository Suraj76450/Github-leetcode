class Solution {
public:
    string reverseWords(string s) {
        // 1. Reverse the entire string
        reverse(s.begin(), s.end());

        int n = s.size();
        int left = 0;  // Marks the start of the current word
        int right = 0; // The actual position we are writing to
        int i = 0;     // Iterator for reading the string

        while (i < n) {
            // Skip leading spaces for the current word
            while (i < n && s[i] == ' ') {
                i++;
            }
            
            if (i == n) break; // Reached the end of the string
            
            // If this isn't the first word we're writing, add a single space before it
            if (right != 0) {
                s[right++] = ' ';
            }
            
            left = right; // Mark where this specific word begins
            
            // Copy the word characters to their correct positions
            while (i < n && s[i] != ' ') {
                s[right++] = s[i++];
            }
            
            // 2. Reverse the individual word back to its normal character order
            reverse(s.begin() + left, s.begin() + right);
        }
        
        // 3. Resize the string to chop off the original trailing characters
        s.resize(right);
        
        return s;
    }
};