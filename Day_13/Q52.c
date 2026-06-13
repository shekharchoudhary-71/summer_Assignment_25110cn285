#include <stdio.h>

void countEvenOdd(int a[], int n) {
    int even = 0, odd = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);
}
int main() {
    int n, arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    countEvenOdd(arr, n);
    return 0;
}
