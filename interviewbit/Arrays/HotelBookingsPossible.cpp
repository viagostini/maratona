bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    map<int, int> m;
    int N = arrive.size();
    for (int i = 0; i < N; i++) {
        m[arrive[i]] += 1;
        m[depart[i]] -= 1;
    }
    int sum = 0;
    for (auto it : m) {
        sum += it.second;
        if (sum > K)
            return false;
    }
    return true;
}

