class Solution {
    public int majorityElement(int[] nums) {
        int majorityIndex = 0;
        int count = 1;
        for(int index = 1; index < nums.length; index++){
            count = nums[majorityIndex] == nums[index] ? ++count : --count;
            if(count == 0){
                majorityIndex = index;
                count = 1;
            }
        }
        return nums[majorityIndex];   
    }
}