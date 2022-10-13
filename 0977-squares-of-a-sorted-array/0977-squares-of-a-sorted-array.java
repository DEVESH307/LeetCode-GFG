class Solution {
    public int[] sortedSquares(int[] nums) {
        // int n = nums.length;
        // for(int i = 0; i < n; i++){
        //     if(nums[i] < 0){
        //         nums[i] = -1*nums[i];
        //     }
        // }
        // Arrays.sort(nums);
        // for(int i = 0; i < n; i++){
        //     nums[i] = nums[i]*nums[i];
        // }
        // return nums;
        int n = nums.length;
        int[] res = new int[n];
        int l = 0;
        int r = n-1;
        for(int i = n-1; i >= 0; i--){
            if(Math.abs(nums[l]) > Math.abs(nums[r])){
                res[i] = nums[l]*nums[l];
                l++;
            }
            else{
                res[i] = nums[r]*nums[r];
                r--;
            }
        }
        return res;
    }
}