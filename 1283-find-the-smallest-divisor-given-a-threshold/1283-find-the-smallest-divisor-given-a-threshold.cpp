class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());

        while(low <= high){
            int mid = (low + high)/2;
            int small_divisor = 0;

            for(int i = 0; i< nums.size(); i++){
                small_divisor += ceil((double)nums[i]/mid);
            }
            if(small_divisor <= threshold){
                
                 high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return low;
        
    }
};