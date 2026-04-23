#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int prefixSum = 0;
        int minPrefix = 0;
        int answer = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            answer = max(answer, prefixSum - minPrefix);

            minPrefix = min(minPrefix, prefixSum);
        }

        return answer;
    }
};
