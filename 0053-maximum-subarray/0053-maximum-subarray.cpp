class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int tp= INT_MIN, n = nums.size();
        int cntsum = 0;
        for(int i = 0; i<n; i++){
             cntsum+=nums[i];
            tp = max(cntsum,tp);

            if(cntsum<0) cntsum=0;
        }
        return tp;
    }
};
