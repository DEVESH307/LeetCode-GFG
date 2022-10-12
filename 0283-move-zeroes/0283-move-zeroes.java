class Solution {
    public void moveZeroes(int[] nums) {
        int cnt0 = 0;
        for(int it: nums){
            if(it == 0){
                cnt0++;
            }
        }
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