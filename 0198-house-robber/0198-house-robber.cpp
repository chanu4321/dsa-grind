class Solution {
public:
    int findway(int i,vector<int> &nums,vector<int> &dp)
    {
        if(i==0) return nums[i];
        if(i<0) return 0;
        if(dp[i]!=-1) return dp[i];
        int take=nums[i]+findway(i-2,nums,dp);
        int nottake=findway(i-1,nums,dp);
        return dp[i]=max(take,nottake);
    }
    int rob(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n,-1);
        dp[0]=nums[0];
        return findway(n-1,nums,dp);
    }
};