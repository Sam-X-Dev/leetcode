class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        double s = 0;
        for (int i = 0; i < k; i++) {
            s += nums[i];
        }
        double mx = s;
        for (int i = k; i < n; i++) {
            s += nums[i] - nums[i - k];
            mx = max(mx, s);
        }
        
        return mx / k;
    }
};