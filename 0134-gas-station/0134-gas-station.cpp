class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        int totgas=0;
        int totcost=0;
        for(int i=0;i<n;i++)
        {
            totgas=totgas+gas[i];
            totcost=totcost+cost[i];
        }
        if(totgas<totcost)
        {
            return -1;
        }
        int ans=0; int fuel=0;
        for(int i=0;i<n;i++)
        {
            fuel=fuel+gas[i]-cost[i];
            if(fuel<0)
            {
                ans=i+1;
                fuel=0;
            }
        }
        return ans;
    }
};