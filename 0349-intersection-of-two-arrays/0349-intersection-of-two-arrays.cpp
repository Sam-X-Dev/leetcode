class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        unordered_map <int,int> um;
        vector<int> ans; 

        for(int i = 0; i<nums1.size(); i++){
             um[nums1[i]] = 1;;     
        }

        for(int i = 0; i<nums2.size();i++){
            if(um.find(nums2[i]) != um.end()){
                um[nums2[i]]++;
            }
        }

        for(auto x:um){
            if( x.second > 1 ){
                ans.push_back(x.first);
            } 
        }

        return ans;
    }
};