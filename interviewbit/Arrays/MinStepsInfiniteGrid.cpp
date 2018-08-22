int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    long long ans = 0;
    if (A.size() == 0)
        return 0;
    for (int i = 1; i < A.size(); i++) {
        int dx = abs(A[i] - A[i-1]);
        int dy = abs(B[i] - B[i-1]);
        ans += max(dx, dy);
    }
    return ans;
}
