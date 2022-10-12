class Solution {
    public void moveZeroes(int[] nums) {
        int i = 0;
        for(int it: nums){
            if(it != 0){
                nums[i++] = it;
            }
        }
        while(i < nums.length){
            nums[i++] = 0;
        }
    }
}