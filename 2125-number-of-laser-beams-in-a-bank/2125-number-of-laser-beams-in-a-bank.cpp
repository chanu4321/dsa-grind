class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev=0;
        int total=0;
        int n=bank.size();
        int m=bank[0].size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s=0;
            for(int j=0;j<m;j++)
            {
                if(bank[i][j]=='1')
                {
                    s++;
                }
            }
            if (s==0) continue;
            total=total+(prev*s);
            prev=s;
        }
        return total;
    }
};