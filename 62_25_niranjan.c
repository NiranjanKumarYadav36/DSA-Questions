#include <stdio.h>

int binary(int a[], int n, int d);

int main() {
    int a[100], n, data;
    
    printf("Warning: Enter elements in ascending or descending order only.\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter element to be found: ");
    scanf("%d", &data);

    int value = binary(a, n, data);

    if (value != -1) {
        printf("%d is present at the location %d\n", data, value);
    } else {
        printf("Element not found\n");
    }

    return 0;
}

int binary(int a[], int n, int d) {
    int lb = 0;
    int up = n - 1;

    while (lb <= up) {
        int mid = (lb + up) / 2;

        if (a[mid] == d) {
            return mid;
        } else if (d < a[mid]) {
            up = mid - 1;
        } else {
            lb = mid + 1;
        }
    }
    
    return -1;
}
