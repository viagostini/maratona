vector<int> Solution::maxset(vector<int> &A) {
    int N = A.size();
    long long maxsum = 0;
    long long cursum = 0;
    int ans_L = -1;
    int ans_R = -1;
    int l = 0;
    
    for (int r = 0; r < N; r++) {
        if (A[r] >= 0) {
            cursum += (long long) A[r];
            if (cursum > maxsum) {
                maxsum = cursum;
                ans_L = l;
                ans_R = r+1;
            } else if (cursum == maxsum) {
                if (r + 1 - l > ans_R - ans_L) {
                    ans_L = l;
                    ans_R = r + 1;
                }
            }
        } else {
            l = r + 1;
            cursum = 0;
        }
    }
    vector<int> ans;
    if (ans_L == -1 || ans_R == -1)
        return ans;
    for (int i = ans_L; i < ans_R; i++)
        ans.push_back(A[i]);
    return ans;
}
