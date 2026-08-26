class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us;
        unordered_set<int> ans;

        for (int x : nums1)
            us.insert(x);

        for (int x : nums2) {
            if (us.find(x) != us.end())
                ans.insert(x);
        }

        return vector<int>(ans.begin(), ans.end());
    }
};