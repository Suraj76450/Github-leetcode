class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        int n = nums.size();
        vector<int> pos, neg;

        // Separate positive and negative numbers
        for (int i = 0; i < n; i++) {
            if (nums[i] >= 0)
                pos.push_back(nums[i]);
            else
                neg.push_back(nums[i]);
        }

        // Case 1: Equal number of positives and negatives
        if (pos.size() == neg.size()) {

            for (int i = 0; i < pos.size(); i++) {
                nums[2 * i] = pos[i];
                nums[2 * i + 1] = neg[i];
            }
        }

        // Case 2: More positives than negatives
        else if (pos.size() > neg.size()) {

            // Place alternately
            for (int i = 0; i < neg.size(); i++) {
                nums[2 * i] = pos[i];
                nums[2 * i + 1] = neg[i];
            }

            // Place remaining positives
            int index = neg.size() * 2;

            for (int i = neg.size(); i < pos.size(); i++) {
                nums[index++] = pos[i];
            }
        }

        // Case 3: More negatives than positives
        else {

            // Place alternately
            for (int i = 0; i < pos.size(); i++) {
                nums[2 * i] = pos[i];
                nums[2 * i + 1] = neg[i];
            }

            // Place remaining negatives
            int index = pos.size() * 2;

            for (int i = pos.size(); i < neg.size(); i++) {
                nums[index++] = neg[i];
            }
        }

        return nums;
    }
};