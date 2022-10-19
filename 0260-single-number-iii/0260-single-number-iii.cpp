class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr = 0;
        int ans1 = 0;
        int ans2 = 0;
        for(auto num: nums){
            xr ^= num;
        }
        // int mask = (xr&(xr-1))^xr;
        int setBit;
        for (int i = 0; i < 32; ++i) {
            if (xr & (1<<i)) {
                setBit = i;
                break;
            }
        }
        for(auto num: nums){
            if(num & (1<<setBit)){
                ans1 ^= num;
            }
            else{
                ans2 ^= num;
            }
        }
        return {ans1, ans2};
    }
};