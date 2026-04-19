class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;   // store n in long long to handle INT_MIN safely
        double ans = 1.0;

        if (power < 0) { // If n is negative, invert x and make power positive
            x = 1.0 / x;
            power = -power;
        }

        while (power > 0) { // Binary exponentiation
            if (power % 2 == 1) { // If power is odd, multiply x into answer
                ans *= x;
            }

            x *= x; // Square x for the next step

            
            power /= 2; // Move to the next bit
        }

        return ans;
    }
};