class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n=nums.size();
        int maxi=INT_MIN;
        int s=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i]==1)
            {
                s++;
            }
            else
            {
                maxi=max(maxi,s);
                s=0;
            }
        }
        maxi=max(maxi,s);
        maxi=max(maxi,0);
        return maxi;
    }
};