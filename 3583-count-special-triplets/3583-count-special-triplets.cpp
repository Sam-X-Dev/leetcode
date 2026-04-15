class Solution {
public:
    int specialTriplets(vector<int>& nums) {
        const int MOD = 1e9 + 7;
        const int MAX = 100000;

        vector<int> left(MAX + 1, 0), right(MAX + 1, 0);

        // count all elements in right
        for (int x : nums) right[x]++;

        long long ans = 0;

        for (int j = 0; j < nums.size(); j++) {
            int x = nums[j];

            right[x]--;  // remove current from right

            int target = 2 * x;

            if (target <= MAX) {
                ans += (long long)left[target] * right[target];
                ans %= MOD;
            }

            left[x]++;   // add current to left
        }

        return ans;
    }
};