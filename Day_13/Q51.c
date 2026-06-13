#include <stdio.h>

void findMinMax(int a[], int n) {
    int max = a[0], min = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Largest = %d\n", max);
    printf("Smallest = %d\n", min);
}

int main() {
    int n, arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMinMax(arr, n);
    return 0;
}
