class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return false;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+nums[i];
        }
        if(sum%2!=0) return false;
        int k=sum/2;
        vector<vector<int>>  dp(n,vector<int>(k+1,-1));
        return subsetsum(n-1,k,nums,dp);
    }
    bool subsetsum(int i,int k,vector<int> &nums,vector<vector<int>> &dp){
    if(k==0) return true;
    else if(k<0) return false;
    else if(i<0&&k==0) return true ;
    else if(i<0&&k!=0) return false;
    else if(dp[i][k]!=-1) return dp[i][k];
    else {
      bool l = subsetsum(i - 1, k - nums[i], nums, dp);
      bool r = subsetsum(i - 1, k, nums, dp);
      return dp[i][k] = l || r;
    }
}
};