class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int m1 = INT_MIN, m2 = INT_MIN, m3 = INT_MIN; 
        int n1 = INT_MAX, n2 = INT_MAX;            
        
        for (int x : nums) {
            if (x > m1) {
                m3 = m2;
                m2 = m1;
                m1 = x;
            } else if (x > m2) {
                m3 = m2;
                m2 = x;
            } else if (x > m3) {
                m3 = x;
            }
            if (x < n1) {
                n2 = n1;
                n1 = x;
            } else if (x < n2) {
                n2 = x;
            }
        }
        return max(m1 * m2 * m3, m1 * n1 * n2);
    }
};