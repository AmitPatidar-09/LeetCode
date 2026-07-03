class Solution {
public:
    int helper(vector<int>&nums, int k)
    {
        int n = nums.size();
        int ans = 0;
        unordered_map<int,int>mp;
        int l = 0;
        int r = 0;
        while(r < n)
        {
            mp[nums[r]]++;
            while(mp.size() > k)
            {
                mp[nums[l]]--;
                if(mp[nums[l]] == 0)
                mp.erase(nums[l]);
                l++;
            }
            if(mp.size() <= k)
            ans+= (r-l+1);
            
            r++;
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        
        return (helper(nums,k) - helper(nums,k-1));
    }
};