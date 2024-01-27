class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size();
        int n2 = text2.size();
        vector<int> curr(n2 + 1, 0);
        vector<int> prev(n2 + 1, 0);
        for (int i = 1; i < n1 + 1; i++) 
        {
            for (int j = 1; j < n2 + 1; j++) 
            {
                if (text1[i - 1] == text2[j - 1]) 
                {
                    curr[j] = 1 + prev[j - 1];
                } 
                else 
                {
                    curr[j] = max(prev[j], curr[j - 1]);
                }
            }
            prev = curr;
        }
        return curr[n2];
    }
    int minInsertions(string s) {
        string t = s;
        reverse(t.begin(), t.end());
        return s.size() - longestCommonSubsequence(s, t);
    }
};