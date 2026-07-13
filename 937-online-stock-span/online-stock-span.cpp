class StockSpanner {
public:
    vector<int> nums;
    StockSpanner() {
    }
    int next(int price) {
        nums.push_back(price);
        int cnt = 0;
        int n = nums.size();
        for(int i = n - 1; i >= 0; i--)
        {
            if(nums[i] <= price)
            cnt++;
            else
            break;
        }
        return cnt;
    }
};