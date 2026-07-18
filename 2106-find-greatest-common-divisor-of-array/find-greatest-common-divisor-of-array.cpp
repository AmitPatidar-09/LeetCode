class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest = INT_MAX;
        int largest = INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] >largest){
                largest = nums[i];
            }
            if(nums[i]<smallest){
                smallest = nums[i];
            }
        }
        return __gcd(largest, smallest);
    }
};