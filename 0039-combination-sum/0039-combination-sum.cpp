class Solution {
public:
    void findcom(vector<int> &candidates, vector<int> &ds, vector<vector<int>> &ans, int target, int i)
    {
        if(candidates.size()==i)
        {
            if(target==0)
            {
                ans.push_back(ds);
             
            }
            return;
        }
            else
            {
                if(candidates[i]<=target)
                {
                    ds.push_back(candidates[i]);
                    findcom(candidates,ds,ans,target-candidates[i],i);
                    ds.pop_back();
                }
                findcom(candidates,ds,ans,target,i+1);
            }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<vector<int>> ans;
        vector<int> ds;
        findcom(candidates,ds,ans,target,0);
        return ans;
    }
};