#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result; // This will store our final answer

        // Step 1: If n is odd, include 0
        // Because 0 doesn't affect the sum
        if (n % 2 == 1) {
            result.push_back(0);
        }

        // Step 2: Add pairs like (i, -i)
        // These pairs always cancel each other → sum = 0
        for (int i = 1; result.size() < n; i++) {
            result.push_back(i);   // add positive number
            result.push_back(-i);  // add its negative pair
        }

        // Step 3: Return the result array
        return result;
    }
};