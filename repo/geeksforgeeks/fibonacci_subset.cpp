#include <cstdio>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

vector<int> findFibonacciSubset (vector<int> a) {
    int f1 = 1, f2 = 1;
    vector<int> ans;
    unordered_set<int> s;

    s.insert(f2);
    int maxi = *max_element(a.begin(), a.end());

    while (f2 <= maxi) {
        swap(f1, f2);
        f2 = f1 + f2;
        s.insert(f2);
    }

    for (int x : a)
        if (s.find(x) != s.end())
            ans.push_back(x);

    return ans;
}

int main() {
    vector<int> a{1, 5, 6, 9, 3, 13, 27, 15};
    vector<int> fib = findFibonacciSubset(a);
    for (auto val : fib)
        printf("%d ", val);
    printf("\n");
}
