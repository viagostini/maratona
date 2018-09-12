#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

const int MAX = 10001;

void countPairsWithDiffK (vector<int> a, int k) {
    int count = 0;
    int set[MAX] = {0};
    
    for (int x : a) set[x]++;
    
    for (int x : a) {
        if (k == 0) {
            if (set[x] > 1)
                count++;
        }
        else {
            if (x+k < MAX && set[x+k])
                count++;
            if (x-k >= 0 && set[x-k])
                count++;
        }
        set[x] = 0;
    }
    
    cout << count << endl;
}

int main() {
    int T, N, K, x;
    vector<int> A;
    cin >> T;
    while (T--) {
        A.clear();
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> x;
            A.push_back(x);
        }
        cin >> K;
        countPairsWithDiffK(A, K);
    }
}
