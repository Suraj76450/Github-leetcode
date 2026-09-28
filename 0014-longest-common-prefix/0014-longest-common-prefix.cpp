class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        // If the array is empty, return an empty string
        if (strs.empty())
            return "";

        // Sort all strings in lexicographical order
        sort(strs.begin(), strs.end());

        // The common prefix of the entire array
        // will be the common prefix of the first and last strings
        string first = strs.front();
        string last = strs.back();

        int i = 0;

        // Compare both strings character by character
        while (i < first.size() &&
               i < last.size() &&
               first[i] == last[i]) {

            i++;
        }

        // Return the common prefix
        return first.substr(0, i);
    }
};