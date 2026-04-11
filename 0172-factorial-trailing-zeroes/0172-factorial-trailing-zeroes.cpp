class Solution {
public:
    int trailingZeroes(int n) {
        int c = 0;
        int fivep = 5;
        while(n/fivep>0){
           c=c+n/fivep;
           fivep = fivep*5;
        }

        return c;
    }
};