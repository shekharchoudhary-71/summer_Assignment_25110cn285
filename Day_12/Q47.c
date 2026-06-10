#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, c;

    printf("%d %d ", a, b);
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int n;
    printf("Enter terms: ");
    scanf("%d", &n);
    fibonacci(n);
    return 0;
}
