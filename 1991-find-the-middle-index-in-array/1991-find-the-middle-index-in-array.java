class Solution {
    public int findMiddleIndex(int[] nums) {
        int n = nums.length;
        int leftSum = 0;
        int totalSum = 0;
        for(int it: nums){
            totalSum += it;
        }
        for(int i = 0; i < n; i++){
            totalSum -= nums[i];
            if(leftSum == totalSum){
                return i;
            }
            leftSum += nums[i];
        }
        return -1;
    }
}