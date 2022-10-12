class Solution {
    public void moveZeroes(int[] nums) {
        // int i = 0;
        // for(int it: nums){
        //     if(it != 0){
        //         nums[i++] = it;
        //     }
        // }
        // while(i < nums.length){
        //     nums[i++] = 0;
        // }
        int i = 0;
        for(int j = 0; j < nums.length; j++){
            if(nums[j] != 0){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
                i++;
            }
        }
    }
}