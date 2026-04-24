class Solution {
public:
    int bulbSwitch(int n) {
        int left = 0, right = n;
        
        while (left <= right) {
            long long mid = left + (right - left) / 2;
            long long square = mid * mid;
            
            if (square == n) return mid;
            if (square < n) left = mid + 1;
            else right = mid - 1;
        }
        
        return right;
    }
};
