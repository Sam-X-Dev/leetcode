#include <algorithm>
class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        if(n == 1) return nums[0];
        if(nums[0] != nums[1]){sum+=nums[0];}
        if(nums[n-1] != nums[n-2]){sum+=nums[n-1];}

        for(int i = 1; i<n-1 ; i++){

            bool condition = ((nums[i] != nums[i-1]) && (nums[i] != nums[i+1]));
            if(condition){

                sum+=nums[i];

            }

            
        }
        return sum;
    }
};