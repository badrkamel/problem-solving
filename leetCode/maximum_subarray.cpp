
// The runtime complexity of Kadane's algorithm is O(n)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int best_sum = nums[0], curr_sum = nums[0];
        
        for (int i =1; i < nums.size(); i++) {
            curr_sum = max(nums[i], curr_sum+nums[i]);
            if (best_sum < curr_sum)
                best_sum = curr_sum;
        }
        return global_max;
    }
};
