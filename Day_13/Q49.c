#include <stdio.h>

void input(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int n;
    int arr[100];

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements: ");
    input(arr, n);

    printf("Array: ");
    display(arr, n);
    return 0;
}
