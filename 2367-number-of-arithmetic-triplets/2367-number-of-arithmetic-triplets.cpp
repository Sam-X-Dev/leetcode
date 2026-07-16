class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n = nums.size();
        int ans = 0;
        int j = 1, k = 2;
        
        for (int i = 0; i < n; i++) {
            while (j < n && nums[j] - nums[i] < diff) j++;
            if (j >= n || nums[j] - nums[i] > diff) continue;
            
            while (k < n && nums[k] - nums[j] < diff) k++;
            if (k < n && nums[k] - nums[j] == diff) {
                ans++;
            }
        }
        
        return ans;
    }
};