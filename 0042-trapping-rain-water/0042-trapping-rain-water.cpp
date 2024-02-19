class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int lmax = 0;
        int rmax = 0;
        int l = 0;
        int r = n-1;
        int water = 0;
        while(l<=r)
        {
            if(height[l]<height[r])
            {
                if(height[l]>=lmax)
                {
                    lmax=height[l];
                }
                else
                {
                    water=water+(lmax-height[l]);
                }
                l++;
            }
            else
            {
                if(height[r]>=rmax)
                {
                    rmax=height[r];
                }
                else
                {
                    water=water+(rmax-height[r]);
                }
                r--;
            }
        }
        return water;
    }
};