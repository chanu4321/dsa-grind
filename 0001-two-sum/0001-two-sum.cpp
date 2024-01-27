class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,-1);
        unordered_map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]=i;
        }
        for(int i=0;i<n;i++)
        {
            if(m.find(target-nums[i])!=m.end()&&m[target-nums[i]]!=i)
            {
                res[0]=i;
                res[1]=m[target-nums[i]];
                break;
            }
        }
        return res;
    }
};