#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

// returns index where x is found or -1 if it is not
int binary_search (const vector<int>& a, int x) {
    int lo = 0, hi = a.size()-1;
 
    while (lo <= hi) {
        int mid = lo + (hi-lo)/2; 

        if (x == a[mid])
        return mid;

        else if (x > a[mid])
        lo = mid + 1;

        else
        hi = mid - 1;
    }
    
    return -1;
}

// if x doesn't exist, returns index of first element > x.
// if x > all(a), returns a.size()
// if x < all(a), returns 0
// if there are many occurences of x, returns the index of the first
int lower_bound (const vector<int>& a, int x) {
    int lo = 0, hi = a.size();
    
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
        
        if (x <= a[mid])
            hi = mid;
            
        else
            lo = mid + 1;
    }
    
    return lo;
}

// returns index to the first element > x
// if x > all(a), returns a.size()
int upper_bound (const vector<int>& a, int x) {
    int lo = 0, hi = a.size();
    
    while (lo < hi) {
        int mid = lo + (hi - lo) / 2;
    
        if (x >= a[mid])
            lo = mid + 1;
        
        else
            hi = mid;
    }
    
    return lo;
}

int main() {
    vector<int> a{1, 2, 2, 4, 7, 12};
    while (true) {
        int query, ans;
        printf("Input: ");
        cin >> query;
        
        printf("\nBinary Search answer:\n");
        printf("%d\n", binary_search(a, query));
        
        printf("Upper Bound answer:\n");
        printf("%d\n", upper_bound(a, query));

        printf("Lower Bound answer:\n");
        printf("%d\n", lower_bound(a, query));

        printf("\n\n");
    }
}
