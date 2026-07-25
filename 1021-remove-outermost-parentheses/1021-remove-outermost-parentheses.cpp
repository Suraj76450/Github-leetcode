class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans = "";
        int n = s.size();
        int start = 0;
        int balance = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(') {
                balance++;
            } else {
                balance--;
            }
            if (balance == 0) {
                ans += s.substr(start + 1, i - start - 1);
                start = i + 1;
            }
            
        }
        return ans;
    }
};
