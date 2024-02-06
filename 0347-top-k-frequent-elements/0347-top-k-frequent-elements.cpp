class Solution {
public:
    static bool sortByVal(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.second > b.second;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<pair<int, int>>s;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            s.push_back(make_pair(i->first, i->second));
        }
        sort(s.begin(),s.end(),sortByVal);
        s.erase(s.begin() + k, s.end());
        vector<int> ans;
        for (auto key : s)
        {
            ans.push_back(key.first);
        }
        return ans;
    }
};