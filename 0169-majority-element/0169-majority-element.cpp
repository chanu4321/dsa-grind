class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int mv=nums[0];
        int c=1;
        for(int i=1;i<n;i++)
        {
            if(nums[i]==mv)
            {
                c++;
            }
            else
            {
                c--;
                if(c==0)
                {
                    mv=nums[i];
                    c=1;
                }
            }
        }
        return mv;
    }
};