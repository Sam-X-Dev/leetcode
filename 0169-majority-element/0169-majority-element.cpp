class Solution {
public:
    int majorityElement(vector<int>& nums) {
         
         unordered_map<int,int> um;
         int maj = (nums.size() / 2);

         for(int i = 0; i<nums.size(); i++){
            um[nums[i]]++;
         }

         for(auto x:um){
            if(x.second > maj){
                return x.first;
            }
         }

         return -1;
    }
};