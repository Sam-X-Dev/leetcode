class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < 3; i++) {
            int mx = i;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] > nums[mx]) mx = j;
            }
            swap(nums[i], nums[mx]);
        }
        for (int i = n - 1; i >= n - 2; i--) {
            int mn = i;
            for (int j = i - 1; j >= 3; j--) {
                if (nums[j] < nums[mn]) mn = j;
            }
            swap(nums[i], nums[mn]);
        }
        
        int p1 = nums[0] * nums[1] * nums[2];
        int p2 = nums[0] * nums[n - 1] * nums[n - 2];
        
        return max(p1, p2);
    }
};