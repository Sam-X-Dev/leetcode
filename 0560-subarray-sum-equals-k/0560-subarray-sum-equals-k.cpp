class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int c = 0;
        int s = 0;
        unordered_map<int, int> m;
        m[0] = 1;
        
        for (int i = 0; i < n; i++) {
            s += nums[i];
            if (m.count(s - k)) {
                c += m[s - k];
            }
            m[s]++;
        }
        
        return c;
    }
};