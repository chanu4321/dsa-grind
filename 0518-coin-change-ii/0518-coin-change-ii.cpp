class Solution {
public:
    int findways(int i,int amount,vector<vector<int>> &dp,vector<int> &coins)
    {
        if(amount==0) return 1;
        if(i<0) return 0;
        if(amount<0) return 0;
        if(dp[i][amount]!=-1) return dp[i][amount];
        int take=0;
        if(coins[i]<=amount)
        {
            take=findways(i,amount-coins[i],dp,coins);
        }
        int nottake=findways(i-1,amount,dp,coins);
        return dp[i][amount]=nottake+take;
    }
    int change(int amount, vector<int>& coins) {
        if(amount==0) return 1;
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int> (amount+1,-1));
        return findways(n-1,amount,dp,coins);
    }
};