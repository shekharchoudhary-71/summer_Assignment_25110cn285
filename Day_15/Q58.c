#include <stdio.h>
int main() {
    int n, k, i, j, temp;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of rotations: ");
    scanf("%d", &k);

    for(i = 0; i < k; i++) {
        temp = arr[0];

        for(j = 0; j < n - 1; j++)
            arr[j] = arr[j + 1];

        arr[n - 1] = temp;
    }
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
