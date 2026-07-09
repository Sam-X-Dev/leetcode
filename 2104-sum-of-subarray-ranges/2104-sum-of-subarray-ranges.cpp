class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n = nums.size();
        long long res = 0;
        for(int i = 0; i<n;i++){
            int maxv = nums[i];
            int minv = nums[i];
            for(int j = i; j<n; j++){
                minv = min(minv,nums[j]);
                maxv = max(maxv,nums[j]);
                res += (maxv - minv);
                
            }
        }
        return res;
    }
};