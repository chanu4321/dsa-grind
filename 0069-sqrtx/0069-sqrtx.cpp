class Solution {
public:
    int mySqrt(int x) {
        if(x==0||x==1) return x;
        int s=1;
        int e=x;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if((1LL*mid*mid)==x)
            {
                return mid;
            }
            else if((1LL*mid*mid)>x)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return round(e);
    }
};