const int MOD = 1000000007;  // Define the modulo

// Modular addition
int mod_add(int a, int b) {
    return ((a % MOD + b % MOD) % MOD + MOD) % MOD;
}

// Modular subtraction
int mod_sub(int a, int b) {
    return ((a % MOD - b % MOD) % MOD + MOD) % MOD;
}

// Modular multiplicationw
int mod_mult(int a, int b) {
    return (1LL * (a % MOD) * (b % MOD)) % MOD;
}

// Modular exponentiation (a^b % MOD)
int mod_pow(int a, int b) {
    int result = 1;
    a = a % MOD;
    while (b > 0) {
        if (b & 1)
            result = mod_mult(result, a);
        a = mod_mult(a, a);
        b >>= 1;
    }
    return result;
}


// Modular inverse using Fermat's little theorem (only if MOD is prime)
int mod_inv(int a) {
    return mod_pow(a, MOD - 2);
}

// (a/b)%m = (a%m)*(pow(b,m-2))%m  -------------> mod_inv(b)

// Modular division: a / b % MOD
int mod_div(int a, int b) {
    return mod_mult(a, mod_inv(b));
}