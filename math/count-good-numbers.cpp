class Solution {
public:
    long long mod_pow(long long base, long long exp, long long mod) {
        long long result = 1;
        base = base % mod; // Take base mod first to prevent overflow

        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod; // Multiply when exp is odd
            }
            base = (base * base) % mod; // Square the base
            exp /= 2;                   // Halve the exponent
        }
        return result;
    }
    long long countGoodNumbers(long long n) {
        int evenOption = n / 2;
        int oddOption = n / 2;

        if (n % 2 != 0) {
            evenOption = evenOption + 1;
        }
        // cout<<"evenOption: "<<evenOption<<endl;
        // cout<<"oddOption: "<<oddOption<<endl;
        const int MOD = 1e9 + 7;
        // long long first = mod_pow(5, evenOption,MOD);
        // long long second = mod_pow(4, oddOption,MOD);
        // long long first = (long long)pow(5, evenOption) % (1000000000 + 7);
        // long long second = (long long)pow(4, oddOption) % (1000000000 + 7);
        // cout<<"first: "<<first<<endl;
        // cout<<"second: "<<second<<endl;

        // long long result = (first * second) % MOD;
        long long temp = mod_pow(20, n / 2, MOD);
 
        int multi = (n % 2 == 0) ? 1 : 5; //(if n is odd multiple my 5)

        long long result = (temp * multi) % MOD;

        return result;

        // 1 2 3
        //
    }
};