#include <stdio.h>
int isPerfect(int n) {
    int sum = 0;

    for (int i = 1; i < n; i++) {
        if (n % i == 0)
            sum += i;
    }

    return (sum == n);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("Perfect number\n");
    else
        printf("Not Perfect\n");
    return 0;
}
