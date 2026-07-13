class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0; 
        long long cur = 0;
        int n = nums.size();
        unordered_map<int, int> m; 

        for (int i = 0; i < k; i++) {
            cur += nums[i];
            m[nums[i]]++;
        }

        if (m.size() == k) {
            ans = cur;
        }
        for (int i = k; i < n; i++) {
            cur += nums[i];
            m[nums[i]]++;

            int out = nums[i - k];
            cur -= out;
            m[out]--;

            if (m[out] == 0) {
                m.erase(out);
            }

            if (m.size() == k) {
                ans = max(ans, cur);
            }
        }
        
        return ans;
    }
};