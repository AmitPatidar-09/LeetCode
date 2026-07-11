class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
       
        sort(skill.begin(), skill.end());
        int n = skill.size();
        int prev = skill[0] + skill[n - 1];
         long long ans = skill[0]*skill[n-1];
        int i = 1, j = n - 2;
        while (i < j) {
            if (skill[i] + skill[j] == prev) {
                ans += (skill[i] * skill[j]);
            } else
                return -1;

            i++, j--;
        }
        return ans;
    }
};