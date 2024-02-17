class Solution {
public:
int findway(vector<int> &coins,int amo,vector<vector<int>> &dp,int i)
{
    if(amo==0) return 0;
    if(i<0) return INT_MAX-1;
    if(dp[i][amo]!=-1) return dp[i][amo];
    int take=INT_MAX;
    if(coins[i]<=amo)
    {
        take=1+findway(coins,amo-coins[i],dp,i);
    }
    int nottake=findway(coins,amo,dp,i-1);
    return dp[i][amo]=min(take,nottake);
}    
int coinChange(vector<int>& coins, int amount)
{
    if(amount==0) return 0;
    int n=coins.size();
    vector<vector<int>> dp(n,vector<int> (amount+1,-1));
    int a = findway(coins,amount,dp,n-1);
    if(a==INT_MAX-1) return -1;
    else return a;
}
};