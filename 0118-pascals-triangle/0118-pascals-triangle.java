class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        for (int i = 0; i < numRows; i++) {
            List<Integer> vec = new ArrayList<Integer>();
            for (int j = 0; j <= i; j++) {
                if(j == 0 || j == i){
                    vec.add(1);
                }
                else{
                    vec.add(res.get(i-1).get(j-1) + res.get(i-1).get(j));
                }
                
            }
            res.add(vec);
        }
        return res;
    }
}