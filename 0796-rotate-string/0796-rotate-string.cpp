class Solution {
public:
    bool rotateString(string s, string goal) {

        // Length must be same
        if (s.length() != goal.length()){
            return false;}

        // Join string with itself
        string combined = s + s;

        // Check if goal is present inside combined
        if (combined.find(goal) != string::npos){
            return true;}

        return false;
    }
};