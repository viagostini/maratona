// Rotate matrix 90 degrees anti-clockwise
// Solution: reverse colunms of transpose of input matrix

#include <cstdio>
#include <vector>

using namespace std;

void transpose (int arr[3][3], int n, int m) {
    for (int i = 0; i < n; i++)
        for (int j = i; j < m; j++)
            swap(arr[i][j], arr[j][i]);
}

void reverse_columns (int arr[3][3], int n, int m) {
    for (int i = 0; i < n/2; i++)
        for (int j = 0; j < m; j++)
            swap(arr[i][j], arr[n-i-1][j]);
}

void print_matrix (int arr[3][3], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    
    printf("\nOriginal:\n");
    print_matrix(arr, 3, 3);

    printf("\nRotated:\n");
    
    transpose(arr, 3, 3);
    reverse_columns(arr, 3, 3);
    
    print_matrix(arr, 3, 3);
}
