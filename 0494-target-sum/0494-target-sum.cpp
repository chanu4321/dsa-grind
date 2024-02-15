class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) 
{
	int n=nums.size();
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=nums[i];
    }	
	if(sum < abs(target) || (target+sum) %2 != 0) return 0;
	int newTarget = (sum - target)/2;
	return countSubsetsWithSumTarget(nums, newTarget,n);
}
int countSubsetsWithSumTarget(vector<int>& nums,int target,int n)
{
	vector<vector<int>> dp(n+1,vector<int> (target+1));
	for(int i=0; i<target+1; i++) dp[0][i] = 0;
	for(int j=0; j<n+1; j++) dp[j][0] = 1;
	for(int i=1; i<n+1; i++)
    {
		for(int j=0; j<target+1; j++)
        {
			if(nums[i-1] <= j)
            {
				dp[i][j] = dp[i-1][j-nums[i-1]] + dp[i-1][j];
		    }
            else
            {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	return dp[n][target];
}
};