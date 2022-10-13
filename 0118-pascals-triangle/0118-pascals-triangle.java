class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
        res.add(new ArrayList<Integer>());
        res.get(0).add(0, 1);
        for (int i = 1; i < numRows; i++) {
            List<Integer> vec = new ArrayList<Integer>();
            vec.add(1);
            for (int j = 1; j < i; j++) {
                vec.add(res.get(i-1).get(j-1) + res.get(i-1).get(j));
            }
            vec.add(1);
            res.add(vec);
        }
        return res;
    }
}