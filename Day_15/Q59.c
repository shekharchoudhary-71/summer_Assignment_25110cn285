#include <stdio.h>
int main() {
    int n, k, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of rotations: ");
    scanf("%d", &k);
    k = k % n;

    for(i = 0; i < k; i++) {
        temp = arr[n - 1];

        for(j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = temp;
    }
    printf("Array after right rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
