#include <stdio.h>
int sum(int a[], int n) {
    int s = 0;
    for (int i = 0; i < n; i++)
        s += a[i];
    return s;
}

int main() {
    int n, arr[100];
    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int s = sum(arr, n);

    printf("Sum = %d\n", s);
    printf("Average = %.2f\n", (float)s / n);
    return 0;
}
