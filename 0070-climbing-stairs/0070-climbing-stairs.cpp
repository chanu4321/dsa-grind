class Solution {
public:
   int FindWays(int i,vector<int> &dp)
   {
       if(i==0)
       return 1;
       if(dp[i]!=-1) return dp[i];
       int r;
       int l=FindWays(i-1,dp);
       if(i>1)
       r=FindWays(i-2,dp);
       return dp[i]=l+r;
   }
    int climbStairs(int n) 
    {
        if(n==1) return 1;
        vector <int> dp(n+1,-1);
        dp[1]=1;
        dp[0]=0;
        return FindWays(n,dp);
   }
};