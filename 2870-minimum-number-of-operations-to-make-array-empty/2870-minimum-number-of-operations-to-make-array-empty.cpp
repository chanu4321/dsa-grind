class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int count=0;
        for(auto j:m)
        {
            int a=j.second;
            if(a==1) return -1;
            count+=a/3;
            if(a%3) count++;
        }
        return count;
    }
};