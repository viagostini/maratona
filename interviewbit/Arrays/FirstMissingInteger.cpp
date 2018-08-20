int Solution::firstMissingPositive(vector<int> &A) {
    int N = A.size();
    
    for (int i = 0; i < N; i++) {
        if (A[i] > 0 && A[i] <= N) {
            int pos = A[i] - 1;
            if (A[pos] != A[i]) {
                swap(A[pos], A[i]);
                i--;
            }
        }
    }
    for (int i = 0; i < N; i++)
        if (A[i] != i+1)
            return i+1;
    return N+1;
}
