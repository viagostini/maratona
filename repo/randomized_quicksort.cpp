#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

int rand_index (int l, int r) {
    srand(time(NULL));
    return l + rand() % (r - l);
}

int partition (vector<int>& arr, int l, int r) {
    int p = rand_index(l, r);
    swap(arr[l], arr[p]);
    int pivot = arr[l], i = l+1, j = r-1;
    while (i <= j) {
        if (arr[i] <= pivot) i++;
        else if (arr[j] > pivot) j--;
        else swap(arr[i++], arr[j--]);
    }
    swap(arr[l], arr[j]);
    return j;
}

void quicksort (vector<int>& arr, int l, int r) {
    if (l < r) {
        int p = partition(arr, l, r);
        quicksort(arr, l, p);
        quicksort(arr, p+1, r);
    }
}

int main() {
    vector<int> v{13, 7, 56, 78, 1, 34, 2};
    quicksort(v, 0, v.size());
    for (int x : v)
        printf("%d ", x);
    assert(is_sorted(v.begin(), v.end()));
}
