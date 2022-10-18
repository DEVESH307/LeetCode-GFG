// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         vector<int> res;
//         long long prod = 1;
//         for(int it: nums){
//             prod *= it;
//         }
//         for(int i = 0; i < nums.size(); i++){
//             res.push_back(prod/nums[i]);
//         }
//         return res;
//     }
// };

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        vector<int> left_prod(n);
        vector<int> right_prod(n);
        left_prod[0] = nums[0];
        right_prod[n-1] = nums[n-1];

        for(int i = 1; i < n; i++){
            left_prod[i] = left_prod[i-1]*nums[i];
            right_prod[n-i-1] = right_prod[n-i]*nums[n-i-1];
        }
        res[0] = right_prod[1];
        res[n-1] = left_prod[n-2];
        for(int i = 1; i < n-1; i++){
            res[i] = left_prod[i-1]*right_prod[i+1];
        }
        return res;
    }
};





















