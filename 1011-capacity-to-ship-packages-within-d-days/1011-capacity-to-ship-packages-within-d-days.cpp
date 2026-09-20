class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {

        int low = *max_element(weights.begin(), weights.end());
        int high = 0;

        for (int i = 0; i < weights.size(); i++)
            high += weights[i];

        while (low <= high) {

            int mid = (low + high) / 2;

            int m_days = 1;
            int load = 0;

            for (int i = 0; i < weights.size(); i++) {

                if (load + weights[i] <= mid)
                    load += weights[i];
                else {
                    m_days++;
                    load = weights[i];
                }
            }

            if (m_days <= days)
                high = mid - 1;
            else
                low = mid + 1;
        }

        return low;
    }
};