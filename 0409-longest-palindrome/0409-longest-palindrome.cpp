class Solution {
public:
    int longestPalindrome(string s) {
        int cnt = 0;
        unordered_set<char> us;

        for(auto x : s){
            if(us.count(x)){
                cnt+=2;
                us.erase(x);
            } else{
                us.insert(x);
            }
        }
        if(!us.empty()){
            cnt+=1;
        }
        return cnt;
    }
};