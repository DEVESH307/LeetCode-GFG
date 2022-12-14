class Solution {
    public int pivotIndex(int[] nums) {
        // int n = nums.length;
        // int[] leftSum = new  int[n];        
        // int[] rightSum = new  int[n];
        // leftSum[0] = nums[0];
        // rightSum[n-1] = nums[n-1];
        // for(int i = 1; i < n; i++){
        //     leftSum[i] = leftSum[i-1] + nums[i];
        //     rightSum[n-i-1] = rightSum[n-i] + nums[n-i-1];
        // }
        // for(int i = 0; i < n; i++){
        //     if(leftSum[i] == rightSum[i]){
        //         return i;
        //     }
        // }
        // return -1;
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









