class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        vector<vector<bool>> dp(n, vector<bool>(n, false));
        string ans = "";
        int maxLength = 0;
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
            ans = s[i];
            maxLength = 1;
        }
        for (int len = 2; len <= n; len++) {
            for (int i = 0; i < n-len+1; i++) 
            {
                int j = i+len-1;
                if (s[i] == s[j]) 
                {
                    if (len == 2 || dp[i+1][j-1]) 
                    {
                        dp[i][j] = true;
                        if (len > maxLength) 
                        {
                            ans = s.substr(i, len);
                            maxLength = len;
                        }
                    }
                }
            }
        }        
        return ans;
    }
};