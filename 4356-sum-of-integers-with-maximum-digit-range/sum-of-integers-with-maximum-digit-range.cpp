class Solution {
public:
    int range(int x) {
        int tmx = 0;
        int tmn = 9;

        while (x) {

            int dig = x % 10;
            tmx = max(tmx, dig);
            tmn = min(tmn, dig);
            x /= 10;
        }
        return tmx - tmn;
    }
    int maxDigitRange(vector<int>& nums) {
        int mx = 0;
        int ans = 0;
        for (int& i : nums) {
           
           int r = range(i);
            

            if (r > mx) {
                mx = max(mx, r);
                ans = 0;
            }
            if (mx == r) {
                ans += i;
            }
        }
        return ans;
    }
};