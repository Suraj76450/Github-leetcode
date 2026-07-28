class Solution {
public:
    string frequencySort(string s) {

        // Store frequency of every ASCII character
        int freq[256] = {0};

        // Count the frequency of each character
        for (char ch : s) {
            freq[ch]++;
        }

        string ans = "";

        // Repeat until all characters are added
        while (true) {

            int maxFreq = 0;
            char maxChar = '\0';

            // Find the character having the highest frequency
            for (int i = 0; i < 256; i++) {

                if (freq[i] > maxFreq) {
                    maxFreq = freq[i];
                    maxChar = (char)i;
                }
            }

            // If no character is left, stop
            if (maxFreq == 0)
                break;

            // Add the character maxFreq times
            while (maxFreq--) {
                ans += maxChar;
            }

            // Mark this character as processed
            freq[(int)maxChar] = 0;
        }

        return ans;
    }
};