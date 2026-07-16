class Solution {
public:
    int gcd(int a, int b)
    {
        if(b == 0) return a;
        else
            return gcd(b, a % b);
    }
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        vector<int> mx(n, 0);
        mx[0] = nums[0];
        int maxi = nums[0];
        for (int i = 1; i < n; i++) {
            mx[i] = max(nums[i], mx[i-1]);
        }
        vector<int>prefixGcd(n,0);
        for(int i = 0; i < n; i++)
            {
                prefixGcd[i] = gcd(nums[i], mx[i]);
            }
        sort(prefixGcd.begin(), prefixGcd.end());
        long long sum = 0;
        int i = 0;
        int j = n - 1;
        while(i < j)
            {
                sum += gcd(prefixGcd[i] ,prefixGcd[j]);
                i++;
                j--;
            }
        return sum;
    }
};