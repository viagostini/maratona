int Solution::hammingDistance(const vector<int> &A) {
    int N = A.size();
    int mod = 1000000007;
    int sum = 0;
    for (int bit = 0; bit < 31; bit++) {
        int ones = 0, zeroes = 0;
        for (int i = 0; i < N; i++) {
            if (A[i] & (1 << bit))
                ones++;
            else
                zeroes++;
        }
        sum = (sum % mod) + ((2LL * ones * zeroes % mod)) % mod;
    }
    return sum;
}
