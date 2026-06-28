class Solution {
public:
    const int M = 1337;

    int power(int a, int b){
        if(b == 0){
            return 1;
        }

        int half = power(a, b/2);
        half = (1LL *half*half) % M;

        if(b%2){
            half = (1LL *half*a)%M;
        }

        return half;
    }


    int superPow(int a, vector<int>& b) {
        if(b.empty()){
            return 1;
        }

        int lastdigit = b.back();
        b.pop_back();

        int part1 = power(superPow(a,b),10);
        int part2 = power(a,lastdigit);

        return (1LL *part1*part2)%M;
    }
};

