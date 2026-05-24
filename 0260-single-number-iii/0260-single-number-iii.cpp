class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map <int,int> um;
        vector<int> ans;

        for(int i = 0; i<nums.size(); i++){
            um[nums[i]]++;
        }

        for(auto x : um){
            if(x.second == 1){
                ans.push_back(x.first);
            }
        }

        return ans;
    }
};