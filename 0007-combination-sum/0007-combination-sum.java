public class Solution {
    public ArrayList<ArrayList<Integer>> combinationSum(int[] candidates, int target) {
        // IMPORTANT: Please reset any member data you declared, as
        // the same Solution instance will be reused for each test case.
        if (candidates.length == 0)
            return new ArrayList<ArrayList<Integer>>();
        return helper(candidates, target, candidates[0]);
    }
    public ArrayList<ArrayList<Integer>> helper(int[] candidates, int sum, int prev) {
        ArrayList<ArrayList<Integer>> res = new ArrayList<ArrayList<Integer>>();
        if (sum < 0)
            return res;
        if (sum == 0) {
            ArrayList<Integer> al = new ArrayList<Integer>();
            res.add(al);
            return res;
        }
        for (int i = 0; i < candidates.length; i++) {
            if (candidates[i] < prev)
                continue;
            if (sum - candidates[i] >= 0) {
                ArrayList<ArrayList<Integer>> sub = helper(candidates, sum - candidates[i], candidates[i]);
                for (ArrayList<Integer> al : sub) {
                    al.add(0, candidates[i]);
                    res.add(al);
                }
            }
        }
        return res;
    }
}