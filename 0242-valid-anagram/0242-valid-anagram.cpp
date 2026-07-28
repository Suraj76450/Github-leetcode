class Solution {
public:
    bool isAnagram(string s, string t) {

        // If lengths are different, they cannot be anagrams
        if (s.length() != t.length())
            return false;

        // Array to store frequency of characters
        int count[26] = {0};

        // Increase count for s and decrease count for t
        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        // Check if every count is zero
        for (int i = 0; i < 26; i++) {
            if (count[i] != 0)
                return false;
        }

        return true;
    }
};