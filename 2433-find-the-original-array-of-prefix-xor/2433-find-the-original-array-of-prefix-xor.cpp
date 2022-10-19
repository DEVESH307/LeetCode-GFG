class Solution {
public:
    vector<int> findArray(vector<int>& nums) {
        for(int i = nums.size()-1; i > 0; i--){
            nums[i] = nums[i]^nums[i-1];
        }
        return nums;
    }
};