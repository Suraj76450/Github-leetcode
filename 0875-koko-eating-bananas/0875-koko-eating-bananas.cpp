class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1;
        int high = *max_element(piles.begin(), piles.end());

        while (low <= high) {

            int mid = low + (high - low) / 2;

            long long reqTime = 0;

            for (int j = 0; j < piles.size(); j++) {
                reqTime += ceil((double)piles[j] / mid);
            }

            if (reqTime <= h) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return low;
    }
};