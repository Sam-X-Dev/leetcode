class Solution {
public:
    int sumOfUnique(vector<int>& nums) {

        unordered_map<int,int> um;

        int sum = 0;
        int n = nums.size();
        
        for(int i = 0; i < n;i++){
            um[nums[i]]++;
        }
            
        for(auto x:um){
            if(x.second == 1){
               sum+= x.first;
            }
        }    
        return sum;
    }
       
};