#include <stdio.h>
int power(int base, int exp) {
    int result = 1;
    for (int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}

int isArmstrong(int n) {
    int temp = n, count = 0, sum = 0;

    while (temp != 0) {
        count++;
        temp /= 10;
    }
    temp = n;
    while (temp != 0) {
        int digit = temp % 10;
        sum += power(digit, count);
        temp /= 10;
    }
    return (sum == n);
}
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong number\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
