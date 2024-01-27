class Solution {
public:
    int first(vector<int>& nums, int target,int n)
    {
        int s=0;
        int e=n-1;
        int f=-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==target)
            {
                f=m;
                e=m-1;
            }
            else if(nums[m]>target)
            {
                e=m-1;
            }
            else
            {
                s=m+1;
            }
        }
        return f;
    }
    int last(vector<int>& nums, int target,int n)
    {
        int s=0;
        int e=n-1;
        int l=-1;
        while(s<=e)
        {
            int m=s+(e-s)/2;
            if(nums[m]==target)
            {
                l=m;
                s=m+1;
            }
            else if(nums[m]>target)
            {
                e=m-1;
            }
            else
            {
                s=m+1;
            }
        }
        return l;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        return {first(nums,target,n),last(nums,target,n)};
    }
};