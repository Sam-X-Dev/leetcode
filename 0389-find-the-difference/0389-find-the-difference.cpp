class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char,int> um;

        for(int i = 0; i < s.size(); i++){
            um[s[i]]++;
        }

        for(int i = 0; i < t.size(); i++){
           if(um[t[i]] > 0){
                um[t[i]]--;
            }
            else{
                return t[i];
            }
        }

        return ' ';
    }
};