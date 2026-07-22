class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int t = 0, b = n - 1;
        int l = 0, r = n - 1;
        int v = 1;
        
        while (t <= b && l <= r) {
            for (int j = l; j <= r; ++j) {
                ans[t][j] = v++;
            }
            t++;
            
            for (int i = t; i <= b; ++i) {
                ans[i][r] = v++;
            }
            r--;
            
            if (t <= b) {
                for (int j = r; j >= l; --j) {
                    ans[b][j] = v++;
                }
                b--;
            }
            
            if (l <= r) {
                for (int i = b; i >= t; --i) {
                    ans[i][l] = v++;
                }
                l++;
            }
        }
        
        return ans;
    
    }
};