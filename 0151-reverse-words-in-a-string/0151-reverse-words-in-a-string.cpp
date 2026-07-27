class Solution {
public:
    string reverseWords(string s) {

        // Reverse the entire string so that the order of words gets reversed
        reverse(s.begin(), s.end());

        int n = s.size();

        // Store the final result
        string ans = "";

        // Pointer used to traverse the reversed string
        int i = 0;

        // Process each word one by one
        while (i < n) {

            // Skip all leading and extra spaces
            while (i < n && s[i] == ' ') {
                i++;
            }

            // Stop if no more words are left
            if (i >= n)
                break;

            // Store the current word
            string word = "";

            // Extract the current word until a space is encountered
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }

            // Reverse the extracted word to restore its original characters
            reverse(word.begin(), word.end());

            // Add a single space before the next word
            // (Skip adding a space before the first word)
            if (!ans.empty()) {
                ans += " ";
            }

            // Append the current word to the answer
            ans += word;
        }

        // Return the string with words in reversed order
        return ans;
    }
};