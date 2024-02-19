class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int start=0;
        int end=n-1;
        if(target<nums[0]) return 0;
        int ans=0;
        while(start<=end)
        {
            int mid=start+((end-start)/2);
            if(nums[mid]==target)
            {
                ans=mid;
                return ans;
            }
            else if(nums[mid]<target)
            {
                ans=mid;
                start=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        return (ans+1);
    }
};