class Solution {
public:
    int findMaxLength(vector<int>& nums) {
       int n = nums.size();
        int mx = 0; 
        int s = 0; 
        unordered_map<int, int> m; 
        m[0] = -1; 
        for (int i = 0; i < n; i++) { 
            s += (nums[i] == 1) ? 1 : -1;
            if (m.count(s)) {
                mx = max(mx, i - m[s]);
            } else {
                m[s] = i;
            }
        }
        
        return mx;
    }
};