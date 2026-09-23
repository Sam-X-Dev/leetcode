class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int idx = -1;
        int zeros = 0;
        int prd = 1;

        for(int i = 0; i<n;i++){
            if(nums[i] == 0){
                zeros++;
                idx = i;
            } else
            prd*=nums[i];
        }

        vector<int> res(nums.size(), 0);

        for(int i = 0; i<n; i++){
            if(zeros == 0){
                res[i] = prd / nums[i];
            } else if(zeros == 1){
                res[idx] = prd;
            }
        }

        return res;
    }
};