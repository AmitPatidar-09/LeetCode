typedef pair<int, int> pp;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (auto& i : nums) {
            mp[i]++;
        }

        priority_queue<pp, vector<pp>, greater<pp>> pq;
        int cnt = 0;
        for (auto& i : mp) {
            pq.push({i.second, i.first});
            if (pq.size() > k) {
                pq.pop();
            }
        }
        vector<int> ans;
        while (!pq.empty()) {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};