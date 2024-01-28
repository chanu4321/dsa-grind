class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        if(n==0) return 0;
        unordered_map<char,int> m;
        int maxi=INT_MIN;
        int j=0;
        int i=0;
        while(j<n)
        {
            if(m.find(s[j])==m.end())
            {
                m[s[j]]=1;
                maxi=max(j-i+1,maxi);
                j++;
            }
            else
            {
                m.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};