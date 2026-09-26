class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int maxE = nums[0];
        int res = nums[0];

        for(int i = 1;i< n; i++){
            maxE = max(nums[i], maxE+nums[i]);
            res = max(res,maxE);
        }
        return res;
    }
};
