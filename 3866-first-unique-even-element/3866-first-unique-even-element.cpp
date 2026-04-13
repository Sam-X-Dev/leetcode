class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // Skip if odd
            if (nums[i] % 2 != 0) continue;
            
            // Count frequency of nums[i]
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            
            // If it's even and appears exactly once
            if (count == 1) {
                return nums[i];
            }
        }
        
        return -1; // No unique even number found
    }
};
