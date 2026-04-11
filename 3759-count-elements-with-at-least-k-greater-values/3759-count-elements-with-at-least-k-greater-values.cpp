class Solution {
public:
    int countElements(vector<int>& nums, int k) {
       // If k = 0, then every element is qualified
        // because every element has at least 0 greater elements
        if (k == 0) {
            return nums.size();
        }

        // Sort the array in increasing order
        // This helps us easily know which elements are bigger
        sort(nums.begin(), nums.end());

        int n = nums.size();

        // nums[n - k] is the first element among the last k elements
        // Any value smaller than nums[n - k] will have at least k elements greater than it
        int target = nums[n - k];

        int c = 0;

        // for(int x : nums) means:
        // take each value from nums one by one and store it in x
        // x is not the index, x is the actual element
        for (int x : nums) {
            // If current element is smaller than target,
            // then there are at least k elements greater than it
            if (x < target) {
                c++;
            }
        }

        return c;
    }
};