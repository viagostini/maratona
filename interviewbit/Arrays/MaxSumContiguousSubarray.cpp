int Solution::maxSubArray(const vector<int> &A) {
    int cur_sum = 0, max_sum = -INT_MAX;
    for (int i = 0; i < A.size(); i++) {
        cur_sum = max(cur_sum+A[i], A[i]);
        max_sum = max(max_sum, cur_sum);
    }
    return max_sum;
}
