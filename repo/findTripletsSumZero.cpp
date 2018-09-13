#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

void findTriplets (vector<int>& a) {
    bool found = false;

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size()-1; i++) {
        // two pointers to iterate through pairs
        int l = i+1, r = a.size()-1;

        while (l < r) {
            if (a[l] + a[r] == -a[i]) {
                found = true;
                printf("%d %d %d\n", a[i], a[l++], a[r--]);
            }
            else if (a[l] + a[r] > -a[i])
                r--;
            else
                l++;
        }
    }
    if (!found)
        printf("No triplets found.\n");
}

int main () {
    vector<int> arr{-3, -1, 0, 1, 2};
    findTriplets(arr);
}
