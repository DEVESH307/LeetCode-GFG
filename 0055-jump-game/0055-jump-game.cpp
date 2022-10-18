class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)
            return true;
        int i = 0;
        for (int reach = 0; i < n && i <= reach; ++i){
            reach = max(i + nums[i], reach);
        }
        return (i == n);
    }
};