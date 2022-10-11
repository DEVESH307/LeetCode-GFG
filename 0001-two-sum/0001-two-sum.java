class Solution {
    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer, Integer> hm = new HashMap<>();
        int n = nums.length;
        int[] res = new int[2];
        for (int i = 0; i < n; i++) {
           if(hm.containsKey(target - nums[i])){
               res[0] = hm.get(target - nums[i]);               
               res[1] = i;

           }
            else{
                hm.put(nums[i], i);
            }
        }
        return res;
    }
}
