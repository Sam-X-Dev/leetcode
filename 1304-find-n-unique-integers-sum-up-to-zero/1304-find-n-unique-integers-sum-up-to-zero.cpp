#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;

        if (n % 2 == 1) {
            result.push_back(0);
        }

        for (int i = 1; result.size() < n; i++) {
            result.push_back(i);
            result.push_back(-i);
        }

        return result;
    }
};