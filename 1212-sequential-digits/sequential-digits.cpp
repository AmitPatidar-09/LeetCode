class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string temp = "123456789";
        vector<int> nums;
        for (int i = 0; i < temp.size(); i++) {
            string x = "";
            for (int j = i; j < temp.size(); j++) {
                x += temp[j];
                int num = stoi(x);
                nums.push_back(num);
            }
        }
        vector<int>ans;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size(); i++)
        {
            if(nums[i] >= low && nums[i] <= high)
            ans.push_back(nums[i]);
        }
        return ans;
    }
};