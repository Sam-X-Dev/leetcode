class Solution {
public:
    int waysToMakeFair(vector<int>& nums) {
         int n = nums.size();
        int seven = 0;
        int sodd = 0;
        int peven = 0;
        int podd = 0;
        int ans = 0;
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) seven += nums[i];
            else sodd += nums[i];
        }
        
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0) seven -= nums[i];
            else sodd -= nums[i];
            
            if (peven + sodd == podd + seven) {
                ans++;
            }
            
            if (i % 2 == 0) peven += nums[i];
            else podd += nums[i];
        }
        
        return ans;
    }
};