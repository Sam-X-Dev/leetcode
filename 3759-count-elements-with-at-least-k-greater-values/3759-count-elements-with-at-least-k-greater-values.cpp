class Solution {
public:
    int countElements(vector<int>& nums, int k) {
       if (k == 0) {
            return nums.size();
        }

        sort(nums.begin(), nums.end());

        int n = nums.size();
        int target = nums[n - k];
        int c = 0;

        for (int x : nums) {
            if (x < target) {
                c++;
            }
        }

        return c;
    }
};