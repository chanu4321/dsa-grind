class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        long long int curr=1;
        long long int maxi=0;
        for(int i=0;i<n;i++)
        {
            curr=curr*nums[i];
            if(nums[i]==0)
            {
                curr=1;
                continue;
            }
            if(curr>maxi)
            {
                maxi=curr;
            }
        }
        curr=1;
        for(int j=n-1;j>=0;j--)
        {
            curr=curr*nums[j];
            if(nums[j]==0)
            {
                curr=1;
                continue;
            }
            if(curr>maxi)
            {
                maxi=curr;
            }
        }
        return maxi;
    }
};