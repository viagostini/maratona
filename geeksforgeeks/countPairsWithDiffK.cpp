#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

const int MAX = 10001;

void countPairs (vector<int> a, int k) {
    int count = 0;
    bool set[MAX] = {false};
    
    for (int x : a) {
        int found = false;
        
        if (x+k < MAX && set[x+k]) {
            count++;
            found = true;
            set[x+k] = false;
        }
        if (x-k >= 0 && set[x-k]) {
            count++;
            found = true;
            set[x-k] = true;
        }
        if (!found)
            set[x] = true;
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
        countPairs(A, K);
    }
}
