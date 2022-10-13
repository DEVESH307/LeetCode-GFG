class Solution {
    public int majorityElement(int[] nums) {
        int ME = nums[0];
        int meCnt = 1;
        for(int i = 1; i < nums.length; i++){
            if(nums[i] == ME){
                meCnt++;
            }
            else{
                meCnt--;
                if(meCnt == 0){
                    ME = nums[i];
                    meCnt = 1;
                }
            }
        }
        return ME;
    }
}