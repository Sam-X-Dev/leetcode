#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum = nums[0];

        int bestSum = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            int number = nums[i];

            currentSum = max(number, currentSum + number);

            bestSum = max(bestSum, currentSum);
        }

        return bestSum;
    }
};
