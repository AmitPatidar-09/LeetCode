class Solution {
public:
    typedef pair<int, pair<int, int>> pp;
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pp> pq;
        for (auto& i : points) {
            int dist = i[0] * i[0] + i[1] * i[1];
            pq.push({dist, {i[0], i[1]}});
            if (pq.size() > k)
                pq.pop();
        }
        vector<vector<int>> ans;
        while (!pq.empty()) {
            auto x = pq.top().second;
            ans.push_back({x.first, x.second});
            pq.pop();
        }
        return ans;
    }
};