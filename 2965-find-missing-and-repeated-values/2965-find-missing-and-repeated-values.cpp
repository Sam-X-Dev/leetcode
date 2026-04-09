class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        long long actualSum = 0, actualSquareSum = 0;
       long long n = grid.size();
       long long N = n * n;

       for (int i = 0; i < n; ++i) {
           for (int j = 0; j < n; ++j) {
               int num = grid[i][j];
               actualSum += num;
               actualSquareSum += (long long)num * num;
           }
       }

       long long expectedSum = (N * (N + 1)) / 2;

       long long expectedSquareSum = (N * (N + 1) * (2 * N + 1)) / 6;

       long long sumDifference = actualSum - expectedSum;

       long long squareSumDifference = actualSquareSum - expectedSquareSum;

       long long sum_ab = squareSumDifference / sumDifference;

       int repeated = (sum_ab + sumDifference) / 2;
       int missing = (sum_ab - sumDifference) / 2;


       return {repeated, missing};
   
    }
};