class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int S1 =  n*(n+1)/2;
        int S2 = 0;
        for(int i = 0; i < n; i++){
            S2 += nums[i];
           
        }
         return S1 - S2;
    }
};