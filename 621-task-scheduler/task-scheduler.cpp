class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> mp(26, 0);
        for (auto& i : tasks) {
            mp[i - 'A']++;
        }
        priority_queue<int> pq;
        for (auto& i : mp) {
            if (i > 0)
                pq.push(i);
        }

        int ans = 0;
        while (!pq.empty()) {
            vector<int> temp;
            int work = 0;
            for (int i = 0; i <= n; i++) {
                if (!pq.empty()) {
                    int freq = pq.top();
                    pq.pop();
                    freq--;
                    work++;
                    if (freq > 0)
                        temp.push_back(freq);
                }
            }
            for (auto& i : temp) {
                pq.push(i);
            }
            ans += pq.empty() ? work : n + 1;
        }
        return ans;
    }
};