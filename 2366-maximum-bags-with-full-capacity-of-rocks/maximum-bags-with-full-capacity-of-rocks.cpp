class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int x) {
        vector<int>temp;
        int n = capacity.size();
        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            int diff = capacity[i] - rocks[i];
            if(diff == 0)
            ans++;
            if(diff > 0)
            temp.push_back(diff);
        }
        sort(temp.begin(), temp.end());
        for(auto &i : temp)
        {
            x -= i;
            if(x < 0) break;
            else ans++;
        }
        return ans;

    }
};