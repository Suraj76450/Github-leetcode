class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }
        vector<int> answer;
        for(auto it : mpp){
            if(it.second > n/3){
                answer.push_back(it.first);
            }
        }
        return answer;
    }
    

}
;