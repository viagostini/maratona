// Rotate matrix 90 degrees anti-clockwise
// Solution: reverse colunms of transpose of input matrix

#include <cstdio>
#include <vector>

using namespace std;

void transpose (vector<vector<int> >& arr) {
    for (int i = 0; i < arr.size(); i++)
        for (int j = i; j < arr[i].size(); j++)
            swap(arr[i][j], arr[j][i]);
}

void reverse_columns (vector<vector<int> >& arr) {
    int n = arr.size();
    for (int i = 0; i < n/2; i++)
        for (int j = 0; j < arr[i].size(); j++)
            swap(arr[i][j], arr[n-i-1][j]);
}

void print_matrix (vector<vector<int> >& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

int main() {
    vector<vector<int> > arr{{1,2,3}, {4,5,6}, {7,8,9}};
    
    printf("\nOriginal:\n");
    print_matrix(arr);

    printf("\nRotated:\n");
    
    transpose(arr);
    reverse_columns(arr);
    
    print_matrix(arr);
}
