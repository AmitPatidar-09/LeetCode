class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        unordered_map<int, int> mp;
        vector<int> copy = arr;
        sort(copy.begin(), copy.end());
        int cnt = 1;
        for (int i = 0; i < arr.size(); i++) {
            if (mp.find(copy[i]) == mp.end()) {
                mp[copy[i]] = cnt;
                cnt++;
            }
        }
        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};