class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        long long int copy=x;
        long long int rev=0;
        while(x>0)
        {
            int d=x%10;
            rev=(rev*10)+d;
            x=x/10;
        }
        if(rev==copy) return true;
        else return false;
    }
};