class Solution {
public:
    int minSwaps(string s) {
        int one = 0;
        int zero = 0;
        int n = s.size();
        for (auto& i : s) {
            if (i == '0')
                zero++;
            else
                one++;
        }
        if (abs(one - zero) > 1)
            return -1;
        string temp(n, 'a');
        string memp(n, 'a');
        int ans = 0;
        for (int i = 0; i < n; i += 2) {
            temp[i] = '0';
            memp[i] = '1';
        }
        for (int i = 1; i < n; i += 2) {
            temp[i] = '1';
            memp[i] = '0';
        }
        int c1 = 0;
        int c2 = 0;
        for (int i = 0; i < n; i++) {
            if (temp[i] != s[i])
                c1++;
            if (memp[i] != s[i])
                c2++;
        }
        c1 /= 2;
        c2 /= 2;

        if(one > zero)
        return c2;
        else if(one < zero)
        return c1;
        else return min(c1,c2);
    }
};